//************************
//James Cain
//CS 317
//Homework 1
//A simple program demonstrating the use of recursion to find the index of a fibonacci sequence.
//************************
#include <iostream>

using namespace std;

int fib(int n);

int main ()
{
  int n;
  cout << "Enter an integer to calculate the corresponding nth Fibonacci Sequence: \n";
  cin >> n; 
  cout << fib(n);
  return 0;
}

int fib(int n)
{
   if (n <= 1)
      return n;
   return fib(n-1) + fib(n-2); 

} //REF: http://www.geeksforgeeks.org/program-for-nth-fibonacci-number/
 