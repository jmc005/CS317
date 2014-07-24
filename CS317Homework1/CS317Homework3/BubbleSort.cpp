//************************
//James Cain
//CS 317
//Homework 1
//A simple program demonstrating bubble sort.
//************************

#include <iostream>
#include <algorithm>

using namespace std;

	void main(){
	int x[]={2,8,4,3,1,7,6,9,5};
	bool condition = true;
	while(condition)
	{
		condition = false;
	for(int i = 0; i < 8; i++)
		{
		if(x[i] > x[i+1])	
			{ 
			swap(x[i], x[i+1]);
			condition = true;
			}
		}
	}
	}	// REF: http://en.wikipedia.org/wiki/Bubble_sort
