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
* PAmain.cpp
*/


#include <iostream>
#include <stdlib.h>
#include "Book.hpp"
#include "SLL.hpp"

using namespace std;
int stars();

void printGreatestBook(Book arr[], int length);// Part A main: Problem 1

int main(){
	int stars();
	int stars();
	int stars();
	cout << " "<< endl;
	cout << "Part A: Problem 1" << endl;
	cout << " "<<endl;
	cout<<"The info about the book with the greatest ratings: "<<endl;
	cout<<" "<<endl;
	int b1Ratings[10] = {6,5,8,7,2,8,2,9,4,10};
	Book b1 = Book("Dan", "Brown", "The Da Vinci Code", 2003, b1Ratings);
	int b2Ratings[10] = {7,3,7,1,6,2,6,1,6,3};
	Book b2 = Book("Paulo", "Coelho", "The Alchemist", 1988, b2Ratings);
	int b3Ratings[10] = {6,3,7,2,8,7,4,10,5,9};
	Book b3 = Book("Napoleon", "Hill", "Thick and Grow Rich", 1937, b3Ratings);
	int b4Ratings[10] = {8,5,9,7,5,3,8,9,6,4};
	Book b4 = Book("Rick", "Warren", "The Purpose Driven Life", 2002, b4Ratings);
	int b5Ratings[10] = {10,3,6,8,9,6,5,8,10,7};
	Book b5 = Book("Louise", "Hay", "You Can Heal Your Life", 2003, b5Ratings);
	Book bookArr[5] = {b1,b2,b3,b4,b5};
	int length = 5;
	printGreatestBook(bookArr, length);
	stars();
	stars();
	stars();
	cout<< " " <<endl;
	cout<<"Part A: Problem 2:" <<endl;
	cout<< " " <<endl;
	int b1A2Ratings[10] = {6,8,3,8,3,2,7,3,4,6};
	Book *b1A2 = new Book("Anna", "Sewell", "Black Beauty", 1877, b1A2Ratings);
	b1A2->bookInfo();
	cout<< " "<<endl;
	stars();
	stars();
	stars();
	cout<< " " <<endl;
	cout<<"Part A: Problem 3:" <<endl;
	cout<< " " <<endl;
	int b1A3Ratings[10] = {6,8,3,8,3,2,7,3,4,6};
	Book b1A3 = Book("Anna", "Sewell", "Black Beauty", 1877, b1A3Ratings);
	int b2A3Ratings[10] = {6,2,7,6,1,9,10,5,3,8};
	Book b2A3 = Book("Jack", "Higgins", "The Eagle Has Landed", 1975, b2A3Ratings);
	Book *barr = new Book[2]{b1A3,b2A3};
	cout<< "Printing out the details of book 1: "<<endl;
	cout <<" "<<endl;
	barr[0].bookInfo();
	cout << " "<<endl;
	cout<< "Printing the details of book 2: "<<endl;
	cout<<" "<<endl;
	barr[1].bookInfo();
	cout<<" "<<endl;
	stars();
	stars();
	stars();
	cout<< " " <<endl;
	cout<<"Part B: Problem 1:" <<endl;
	cout<< " " <<endl;



	return 0;
}

void printGreatestBook(Book arr[], int length){ // putting length in the parameters. Will be 5 for testing
	double tmp = arr[0].avgRating();
	int position = 0;
	for(int i = 1; i <length; i++){
		if(arr[i].avgRating() > tmp){
			tmp = arr[i].avgRating();
			position = i;
		}
	}
	arr[position].bookInfo();
}

int stars(){ //prints out a line of stars to differentiate between different questions
	cout << "******************************************************************************************************" << endl; // prints stars
	return 0; //dummy return statement
}

