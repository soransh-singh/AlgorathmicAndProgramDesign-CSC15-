#include<iostream>

using namespace std;

int gcd(int num1, int num2){
	int a,b;
	if(num1>num2){
		a = num1;
		b = num2;
	}else{
		a = num2;
		b = num1;
	}
	while(b > 0){
		int temp = a%b;
		a = b;
		b = temp;	
	}
	return a;
}

int main(){
	cout<<gcd(12,14)<<endl;
	cout<<gcd(12,16)<<endl;
	cout<<gcd(15,40)<<endl;
	return 0;
}
