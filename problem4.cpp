#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

int main(){
	int tempProduct;
	int largestPalindrome = 0;
	bool notPalindrome = false;

	// Iterate through all three-digit numbers
	for(int i = 999; i > 99; i--){
		for(int j = i; j > 99; j--){
			tempProduct = i * j;
			// Convert to string in order to check each spot in the int
			ostringstream str1;
			str1 << tempProduct;
			string productStr = str1.str();

			// Compare the "k" place with the "negative k" place
			for(int k = 0; k < productStr.length()/2; k++){
				// If the spots aren't equal, it's not a palindrome
				if(productStr[k] != productStr[productStr.length()-(k+1)]){
					notPalindrome = true;
					break;
				}
				notPalindrome = false;
			}
			// If a palindrome is found, check if it's the largest one and store it
			if(!notPalindrome && largestPalindrome < tempProduct){
				largestPalindrome = tempProduct;
			}
			// Reset 
			tempProduct = 0;
		}
	}
	cout << largestPalindrome;

	return 0;
}