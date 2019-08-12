#include <iostream>
#include <fstream>
using namespace std;

// int fib(int x){
// 	if(x == 0){return 0;}
// 	else if(x <= 2){return 1;}
// 	else{return x + fib(x-1);}
// }

int main(){
	int curPrev = 1;
	int cur = 1;
	int temp;
	int sum = 0;
	while(cur < 4000000){
		temp = cur;
		cur = cur + curPrev;
		curPrev = temp;
		if(cur % 2 == 0){
			sum += cur;
		}
	}

	cout << sum;
	// cout << fib(4);
	
	return 0;
}