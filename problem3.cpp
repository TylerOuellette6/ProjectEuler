#include <iostream>
#include <fstream>
#include<bits/stdc++.h>
using namespace std;

int main(){
	long long numToCheck;
	long long largest = 2;
	bool prime;
	cout << "Enter your number: ";
	cin >> numToCheck;

	for(int i = 3; i < sqrt(numToCheck); i++){
		prime = true;
		for(int j = 3; j < sqrt(i); j += 2){
			if(i % j == 0){
				prime = false;
				break;
			}
		}
		if(numToCheck % i == 0 && prime){
			if(i > largest){
				largest = i;
			}
		}
	} 

	cout << largest;

	return 0;
}