#include<iostream>
#include<cmath>

using namespace std;
// Write a program to find all the prime numbers lying between 100 and 200 using user-defined function.

bool isPrime(int num){
	int term = num;
	int termRoot = sqrt(num);
	bool check=true; 
	for(int i=2; i<=termRoot; i++){
		if(term%i == 0){
			check = false;
		}
	}
	return check;
}

int main(){
	cout<<"All the prime numbers lying between 100 and 200 :"<<endl;
	for(int i=100; i<=200; i++){
		isPrime(i) && cout<<i<<endl;
	}
	return 0;
}
