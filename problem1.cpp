#include <iostream>
#include <fstream>
using namespace std;

/**
PROBLEM:
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. 
The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.
*/

int main(){
	int sum = 0;

	// Go through all numbers less than 1000
	for(int i = 0; i < 1000; i++){
		// Make sure they're divisible by 3 AND 5
		if(i % 3 == 0 || i % 5 == 0){
			// Add to the overall sum
			sum += i;
		}
	}

	cout << sum;
	return 0;
}
