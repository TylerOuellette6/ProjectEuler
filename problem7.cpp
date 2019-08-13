#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;

/**
PROBLEM:
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number?
*/

int main(){
	int counter = 0;
	int numPrime; // 10,001 in this case
	bool prime;
	int largestPrimeSoFar;

	// This lets the user find ANY prime number they want, not just the one for the problem
	cout << "Enter which prime number you want to find: ";
	cin >> numPrime;

	// Go through "all" the numbers
	for(int i = 2; i < 99999999; i++){
		// If the desired number is reached, stop and print it
		if(counter == numPrime){
			cout << largestPrimeSoFar;
			break;
		}

		// Reset every time, just in case
		prime = true;
		// Go through all the numbers less than the sqrt of i to check if it's prime
		for(int j = 2; j <= sqrt(i); j++){
			if(i % j == 0){
				prime = false;
				break;
			}
		}
		// If a prime is found, increment the counter and save it 
		if(prime){
			largestPrimeSoFar = i;
			counter++;
		}
	}

	return 0;
}