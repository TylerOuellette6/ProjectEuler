#include <iostream>
#include <fstream>
#include<cmath>
using namespace std;

/*
PROBLEM:
A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

								a2 + b2 = c2

For example, 32 + 42 = 9 + 16 = 25 = 52.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.
*/

int main(){
	// Keep track if the Pythagorean triplet has been found yet
	bool found = false;
	// Keep incrementing A until the number is found
	for(int a = 1; !found; a++){
		// B has to be larger than A, but also smaller than 1000 for this problem
		for(int b = a+1; b < 1000; b++){
			int sum = pow(a, 2) + pow(b, 2);
			int c;
			// Check if square root of the sum is a whole number
			if(floor(sqrt(sum)) == sqrt(sum)){
				c = sqrt(sum);
				// If the sum of A, B, and C are 1000, the Pythagorean triplet is found!
    			if(a + b + c == 1000){
    				cout << pow(a, 2) << "\t" << pow(b, 2) << "\t" << sum << endl;
    				cout << a << "\t" << b << "\t" << c << "\t" << endl;
    				cout << a * b * c << endl;
    				found = true;
    			}
			}
		}
	}
	return 0;
}