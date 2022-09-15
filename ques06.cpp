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
	int num1, num2;
	cout<<"Enter the two numbers to find it's GCD"<<endl;
	cout<<"Enter a First Number: ";
	cin>>num1;
	cout<<"Enter a Second Number: ";
	cin>>num2;
	cout<<"GCD of Given two numbers is "<<gcd(num1,num2)<<endl;
	return 0;
}
