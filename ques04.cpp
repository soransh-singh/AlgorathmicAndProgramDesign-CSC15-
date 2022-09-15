#include<iostream>
#include<cmath>

using namespace std;

double fact(double num){
	if(num == 0)
		return 1;
	else
		return num*fact(num-1);
}

double sine(double x, int n){
	int power, i, sign, den;
	double ans=0, y=(x*3.14159)/180;
	for(int i=0; i<n; i++){
		power = (2*i)+1;
		den = fact(power);
		sign = pow(-1, i);
		ans=ans+(sign*pow(y, power)/den);
	}
	return ans;
}

int main(){
	int n;
	double x;
	cout<<"Enter a angle in angle: ";
	cin>>x;
	cout<<"Enter the number of in series :";
	cin>>n;
	cout<<"Value of sin("<<x<<") = "<<sine(x,n)<<"\n";
	return 0;
}
