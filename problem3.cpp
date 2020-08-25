#include <iostream>
#include <fstream>
#include<bits/stdc++.h>
using namespace std;
/**
PROBLEM:
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
*/

int main(){
	long long numToCheck;
	long long largest = 2;
	bool prime;
	// This works with any number the user wants to enter
	cout << "Enter your number: ";
	cin >> numToCheck;

	// This isn't perfect since some even numbers just don't have prime factors...
	// Putting in such a number results in a return value of 2

	// The prime factor will never be larger than the square root of the number itself
	// To make the program run quicker, only check numbers up to the square root of the number
	// This first for loop is simply looking at every number less than the square root
	// These numbers get checked later to make sure they're prime AND factors 
	for(int i = 3; i < sqrt(numToCheck); i++){
		prime = true;
		// Don't check even numbers because they obviously aren't prime 
		// Again, we only go up to the square root for efficiency purposes
		// This second for loop checks to make sure the number is actually prime
		for(int j = 3; j < sqrt(i); j += 2){
			// If j divides into i evenly, then it can't be prime
			if(i % j == 0){
				prime = false;
				break;
			}
		}
		// Make sure the number i is at is a factor and prime
		if(numToCheck % i == 0 && prime){
			// Now just check to see if the largest factor has been found
			if(i > largest){
				largest = i;
			}
		}
	} 

	cout << largest;

	return 0;
}
