#include<iostream>
#include<cmath>

using namespace std;

double sqrt(float num){

	float x = num;
	for(int i=0; i<10; i++){
		x = x - ((pow(x,2)-num)/(2*x));
	}
	return x;
}

int main(){
	double num;
	cout<<"Enter a number to find it's root: ";
	cin>>num;
	cout<<"Square root of a given number "<<num<<" is "<<sqrt(num)<<endl;
	return 0;
}
