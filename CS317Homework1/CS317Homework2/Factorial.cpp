//************************
//James Cain
//CS 317
//Homework 1
//A simple program demonstrating the use of recursion to find the factorial of a given integer.
//************************
#include <iostream>

using namespace std;

int factorial(int n);

void main(){
	int n;
	cout << "Enter a positive integer to find it's factorial value: \n";
	cin >> n;
	cout << factorial(n);

}

int factorial(int n)
{
	if(n==0 || n==1)
		return 1;
	else
		return n*factorial(n-1);
	
}  //REF: http://www.cplusplus.com/forum/beginner/16482/