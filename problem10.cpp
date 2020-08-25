#include <iostream>
#include <fstream>
#include<cmath>
using namespace std;

/*
PROBLEM:

The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.
*/

int main(){
	// Keep a running sum
	long long sum = 0;
	// Go up to two million
	for(int i = 2; i < 2000000; i++){
		bool prime = true;
		// Go through all of the number less than the square root of i to check if i is prime
		for(int j = 2; j <= sqrt(i); j++){
			if(i % j == 0){
				prime = false; 
				break;
			}
		}
		// If i is prime, add it to the runnning sum
		if(prime){
			sum += i;
		}
	}

	cout << sum << endl;

	return 0;
}