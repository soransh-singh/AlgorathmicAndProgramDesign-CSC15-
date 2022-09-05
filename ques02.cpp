#include<iostream>

using namespace std;

/* factorial in iterative manner */
int fact_iterative(int num){
	int fact=1;
	for(int i=num; i>=1; i--){
		fact*=i;
	}
	return fact;
}

/* factorial in recursive manner */
int fact_recursive(int num){
	if(num == 0){
		return 1;
	}else{	
		return num*fact_recursive(num-1);
	}
}

int main(){
	int num;
	cout<<"enter a number: ";
	cin>>num;
	cout<<"Factorial of a given number by iterative function: "<<fact_iterative(num);
	cout<<"\nFactorial of a given number by recursive function: "<<fact_recursive(num);
	return 0;
}
