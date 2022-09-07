#include<iostream>

using namespace std;

/* fibonacci iterative */
int fib_iterative(int num){
	if(num == 1){
		return 0;
	}else if(num == 2){
		return 1;
	}
	else{
		int fib1 = 0;
		int fib2 = 1;
		int fib3 = 0;
		for(int i=3; i<=num; i++){
			fib3 = fib2 + fib1;
			fib1 = fib2;
			fib2 = fib3;
		}
		return fib3;
	}
}

/* fibonacci recursive */
int fib_recursive(int num){
	if(num ==1){
		return 0;
	}else if(num == 2){
		return 1;
	}else{
		return fib_recursive(num-1) + fib_recursive(num-2);
	}
} 

int main(){
	int num;
	cout<<"Enter a number to get it's corresponding fibonacci number:";
	cin>>num;
	cout<<"Fibonacci number by iterative manner: "<<fib_iterative(num)<<"\n";
	cout<<"Fibonacci number by recursive manner: "<<fib_recursive(num)<<"\n";
	return 0;
}
