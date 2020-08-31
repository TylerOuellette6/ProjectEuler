#include <iostream>
#include <fstream>
using namespace std;

/*
PROBLEM:
The following iterative sequence is defined for the set of positive integers:

n → n/2 (n is even)
n → 3n + 1 (n is odd)

Using the rule above and starting with 13, we generate the following sequence:

13 → 40 → 20 → 10 → 5 → 16 → 8 → 4 → 2 → 1
It can be seen that this sequence (starting at 13 and finishing at 1) contains 10 terms. 
Although it has not been proved yet (Collatz Problem), 
it is thought that all starting numbers finish at 1.

Which starting number, under one million, produces the longest chain?

NOTE: Once the chain starts the terms are allowed to go above one million.
*/
int main(){
	int startNum = 0;
	int largest = 0;
	long long curr;
	// This acts as a cache
	int* alreadySeen = new int[1000000];

	for(int i = 0; i < 1000000; i++){
		// Initialize to a dummy value
		alreadySeen[i] = -1;
	}
	alreadySeen[1] = 1;

	// Loop through all numbers two through one million
	for(int i = 2; i < 1000000; i++){
		curr = i;
		int counter = 0;
		// If the number is one or has already been seen in another sequence 
		while(curr != 1 && curr >= i){
			if(curr % 2 == 0){
				curr = curr / 2;
			} else {
				curr = curr * 3 + 1;
			}
			counter++;
		} 

		// Update the Collatz sequence length in the cache
		alreadySeen[i] = counter + alreadySeen[curr];
		// If it's the largest sequence, save the starting number
		if(alreadySeen[i] > largest){
			startNum = i;
			largest = alreadySeen[i];
		}
	}
	// Clear/release the cache
	delete[] alreadySeen;

	cout << "Longest Chain: " << largest << "\tStarting Num: " << startNum;
	return 0;
}

