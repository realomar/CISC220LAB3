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

void printGreatestBook(Book arr[], int length);// Part A main: Problem 1

int main(){
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

	return 0;
}

void printGreatestBook(Book arr[], int length){ // putting length in the parameters. Will be 5 for testing
	double tmp = 0;
	int position;
	for(int i = 0; i <length-1; i++){
		if(arr[i] > arr[i+1] && tmp > arr[i].avgRating()){
			tmp = arr[i].avgRating();
			position = i;
		}
		else if(arr[i] < arr[i+1] && tmp > arr[i+1].avgRating()){
			tmp = arr[i+1].avgRating();
			position = i+1;
		}
		else{
		}
	}
	arr[position].bookInfo();
}
