#include <iostream>
#include <fstream>
using namespace std;

/**
PROBLEM:
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/

int main(){
	int max = 20; // This is the number to go up to when checking if divisible (i.e.: 1-20)
	bool smallestFound = false;
	int iterator = 1; 
	while(!smallestFound){
		// GO through the numbers (1-20, in this case)
		for(int i = 1; i <= max; i++){
			// If it doesn't divide evenly, skip it 
			if(!(iterator % i == 0)){
				break;
			}
			// If this point is reached, it has to be the case that the smallest number has been found 
			if(i == max){
				cout << iterator;
				smallestFound = true;
			}
		}
		// Make sure to iterate! 
		iterator++;
	}

	return 0;
}