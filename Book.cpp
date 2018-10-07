/*
* CISC220-31L LAB 3
*
* Debra Yarrington
*
* Created on: Oct 3th, 2018
*
* TA: Moumita Bhattacharya
*
* Authors: omaromar@udel.edu Omar Ahmad
*  		tamimoz@udel.edu  Ahmad Tamimi
*
* bookClass.cpp
*/



#include <iostream>
#include <stdlib.h>
#include "Book.hpp"

using namespace std;

//Problem 2A: 1st constructor. Takes first name, last name, book name, and year of publication as inputs. It constructs a book with that information.

Book :: Book (string first, string last, string book, int year){
	firstName = first;
	lastName = last;
	bookName = book;
	yearPublished = year;
	for(int i = 0; i <10; i++){
		bookRatings[i] = 0;
	}
}

//Problem 2B: 2nd constructor. Takes first name, last name, book name, year of publication, and an array of 10 ratings as inputs. It constructs a book with that information.

Book :: Book (string first, string last, string book, int year, int arrBookRatings[]){
	firstName = first;
		lastName = last;
		bookName = book;
		yearPublished = year;
	for(int i = 0; i <10; i++){
		bookRatings[i] = arrBookRatings[i];
	}
}

//Problem 3: Destructor. Deletes the array of ratings from the heap to prevent memory leak.

Book :: ~Book(){
	delete []bookRatings;
}

//Problem 4: Average rating (traverses through the array bookRatings and sums the numbers and returns their average). Sums the values of the ratings in the ratings array and computes the average rating of that book and returns it as a double.

double Book::avgRating(){
	int sum = 0;
	double average;
	for(int i = 0; i <10; i++){
		sum += bookRatings[i];
	}
	average = sum / 10;
	return average;
}

//Problem 5: Print the average rating of the book into the console. This function calls the avgRating() function defined aboce to determine and print out the average value.

void Book::printAvgRating(){
	if (avgRating() == 0){
		cout<< "no ratings yet" <<endl;
	}
	else{
		cout<<"The average rating of this book is: " << avgRating() <<endl;
	}
}

//Problem 6: Print all the information about the book including the average rating, publication year, author's name, etc.

void Book::bookInfo(){
	cout<<"The name of the book is ' "<< bookName << " '."<< endl;
	cout<<" "<< endl;
	cout<<"The author's first name is "<< firstName << "."<< endl;
	cout<<" "<< endl;
	cout<<"The author's last name is "<< lastName << "."<< endl;
	cout<<" "<< endl;
	cout<<"The book's year of publication is "<< yearPublished << "."<< endl;
	cout<<" "<< endl;
	printAvgRating();
	cout<<" "<< endl;
}

//Problem 7A: Overload the '>' operator in this class. If the rating of the book to the left of the '>' operator is greater than the rating of the book to the right of the operator it returns true. Otherwise it returns false

bool Book::operator>(Book x){
	if (avgRating() > x.avgRating()){
		return true;
	}
	else{
		return false;
	}
}

//Problem 7B: Overload the '<' operator in this class. If the rating of the book to the left of the '<' operator is less than the rating of the book to the right of the operator it returns true. Otherwise it returns false.

bool Book::operator<(Book x){
	if (avgRating() < x.avgRating()){
		return true;
	}
	else{
		return false;
	}
}
