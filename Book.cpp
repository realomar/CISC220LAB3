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

//Problem 2A: 1st constructor

Book :: Book (string first, string last, string book, int year){
	firstName = first;
	lastName = last;
	bookName = book;
	yearPublished = year;
	for(int i = 0; i <10; i++){
		bookRatings[i] = 0;
	}
}

//Problem 2B: 2nd constructor

Book :: Book (string first, string last, string book, int year, int arrBookRatings[]){
	firstName = first;
		lastName = last;
		bookName = book;
		yearPublished = year;
	for(int i = 0; i <10; i++){
		bookRatings[i] = arrBookRatings[i];
	}
}

//Problem 3: Destructor

Book :: ~Book(){
	for(int i=0; i <10; i++){
		delete [] bookRatings[i];
	}
	delete [] bookRatings;
}

//Problem 4: Average rating (traverses through the array bookRatings and sums the numbers and returns their average)

double Book::avgRating(){
	int sum = 0;
	double average;
	for(int i = 0; i <10; i++){
		sum += bookRatings[i];
	}
	average = sum / 10;
	return average;
}

//Problem 5: Print the average rating of the book into the console

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

//Problem 7A: Overload the '>' operator in this class.

bool Book::operator>(Book x){
	if (avgRating() > x.avgRating()){
		return true;
	}
	else{
		return false;
	}
}

//Problem 7B: Overload the '<' operator in this class.

bool Book::operator<(Book x){
	if (avgRating() < x.avgRating()){
		return true;
	}
	else{
		return false;
	}
}
