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
* bookClass.hpp
*/

#ifndef book_hpp_
#define book_hpp_

#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

class Book{
	// fields containing book information // question 1
	string firstName;
	string lastName;
	int *bookRatings = new int[10];
	string bookName;
	int yearPublished;

public:

	//Constructors:

	Book();
	// problem 2a
	Book(string firstName, string lastName, string bookName, int yearPublished);
	// problem 2b
	Book(string firstName, string lastName, string bookName, int yearPublished, int bookRatings[]);

	//Destructor:

	~Book(); //Destructs the book rating array from the heap.

	//Methods:

	double avgRating(); //Returns the average rating of the book
	void printAvgRating(); //Prints the average rating of the book.
	void bookInfo(); //Prints the information about the book such as he author's first and last name, it also prints the year of publication, and the average rating of the book.
	bool operator>(Book a); //Overloads the '>' operator
	bool operator<(Book a); //Overloads the '<' operator

};


#endif /* BOOK_HPP_ */
