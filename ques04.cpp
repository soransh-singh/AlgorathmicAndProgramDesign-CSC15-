#include<iostream>
#include<cmath>

using namespace std;

double sin(double x){
	float val = 0;
	int fact = 1;
	for(int n=0;n<10;n++){
	val += pow(-1,n) * pow(x, (2*n)+1)/fact;
	fact *= (2*n) * ((2*n)+1);
	}
	return val;
}

int main(){
	float x;
	cout<<"Enter a angle in radian: ";
	cin>>x;
	cout<<"Value of sin("<<x<<") = "<<sin(x)<<"\n";
	return 0;
}
