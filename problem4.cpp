#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

int main(){
	int tempProduct;
	int largestPalindrome;
	bool isPalindrome = false;

	for(int i = 999; i > 99; i--){
		for(int j = i; j > 99; j--){
			tempProduct = i * j;
			ostringstream str1;
			str1 << tempProduct;
			string productStr = str1.str();
			cout << productStr \
			<< "\tLength: " << productStr.length()
			<< "\tFirst: " << productStr[0] 
			<< "\tLast: " <<  productStr[productStr.length()-1] << endl;
			// for(int k = 0; k < productStr.length()/2; k++){
			// 	if(productStr[0] != productStr[productStr.length()-(k+1)]){
			// 		break;
			// 	}
			// 	isPalindrome = true;
			// }
			// if(isPalindrome == true){
			// 	cout << i << " and " << j << " make " << productStr << endl;
			// }
			tempProduct = 0;
		}
	}

	return 0;
}