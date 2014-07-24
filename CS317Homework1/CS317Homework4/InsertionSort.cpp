//************************
//James Cain
//CS 317
//Homework 1
//A simple program demonstrating Insertion Sort.
//************************
#include <cstdlib>
#include <iostream>
 
using namespace std;
 

void main() {
 
	int x[]= {7,4,3,8,9,5,2,6,1};
	int i, j , key;
	for (i = 1; i < 9; i++) {
		j = i;
		while (j > 0 && x[j - 1] > x[j]) {
			key = x[j];
			x[j] = x[j - 1];
			x[j - 1] = key;
			j--;
		}
	}
}
 


//REF: http://en.wikipedia.org/wiki/Insertion_sort