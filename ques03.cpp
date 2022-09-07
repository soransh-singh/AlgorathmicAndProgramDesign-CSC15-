#include<iostream>

using namespace std;

/* fibonacci iterative */
int fib_iterative(int num){
	if(num <= 1){
		return num;
	}else{
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
	if(num <=1){
		return num;
	}else{
		return fib_recursive(num-1) + fib_recursive(num-2);
	}
} 

int main(){
	cout<<fib_iterative(3)<<"\n";
	cout<<fib_iterative(4)<<"\n";
	cout<<fib_iterative(5)<<"\n";
	cout<<fib_recursive(3)<<"\n";
	cout<<fib_recursive(12)<<"\n";
	return 0;
}
