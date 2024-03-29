/* The Fibonacci sequence is a classic sequence in CS. 
This implementaton does not use memoization. */

#include <iostream>
using namespace std;

int fib(int x){
	/*  The program runs the recursive
		Fibonacci sequence 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 134, ...
		which was devised by Fibonacci (1170 ad - 1250 ad), 
		who used this to model the breeding of pairs of rabbits. 

		pre: n is a small positive integoer
		Post: This function uses the following dedinition
		fib(x) = 0 for x <= 0
		fib(1) = 1
		fib(x) = fib(x - 1) + fib(x - 2)  for x >= 2 */

	if (x > 1) { 
		cout << x << " ";
		return (fib(x - 1) + fib(x - 2));
	}
	else {
		if (x == 1) {
			cout << x << " ";
			return 1;
		}
		else { // x <= 0
			cout << x << " ";
			return 0;
		}
	}
}

int main(){

	int n, total;

	cout << "Enter a small positive integer: ";
	cin >> n;

	cout << "\nHere are the function calls: ";
    total = fib(n);

	cout << "\n\nFibonacci of " << n << " is " << total << "." << endl;

    return 0;
}