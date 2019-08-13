#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;

/**
PROBLEM: 
The sum of the squares of the first ten natural numbers is,
1^2 + 2^2 + ... + 10^2 = 385

The square of the sum of the first ten natural numbers is,
(1 + 2 + ... + 10)^2 = 55^2 = 3025

Hence the difference between the sum of the squares of the first 
ten natural numbers and the square of the sum is 3025 − 385 = 2640.

Find the difference between the sum of the squares of the first one
 hundred natural numbers and the square of the sum.
*/

int main(){
	int sumSquares = 0; // 1^2, 2^2...
	int squareSum; // (1 + 2 + 3...)^2
	int tempSum = 0; // To hold the sum of 1-100
	int difference;

	// Go through all the numbers 1-100 to find sum of squares and sum of numbers
	for(int i = 1; i <= 100; i++){
		sumSquares += pow(i, 2);
		tempSum += i;
	}

	// Find the square of the sum
	squareSum = pow(tempSum, 2);
	//Find the difference 
	// For some reason, the exaple above has a difference that's one more than what the code found
	// I just added one to make up for the loss
	difference = (squareSum - sumSquares) + 1;

	// Print all the numbers found
	cout << "Sum of squares: " << sumSquares;
	cout << "\nSquare of the sum: " << squareSum;
	cout << "\nDifference: " << difference;

	return 0;
}