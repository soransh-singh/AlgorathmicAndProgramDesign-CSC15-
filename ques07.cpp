#include<iostream>
using namespace std;

//Reverse a digit of a given number

int reverseDigit(int num){
	int x = num, reverse=0;

	while(x != 0){
		int d = x % 10;
		x/=10;
		reverse= (reverse*10) + d;
	}
	return reverse;
}

int main(){
	int num;
	cout<<"Enter a number: ";
	cin>>num;
	cout<<"Reverse of given number "<<num<<" is "<<reverseDigit(num)<<endl;
 	return 0;
}
