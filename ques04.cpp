#include<iostream>
#include<cmath>

using namespace std;

double sine(double x){
	float val = 0;
	int fact = 1;
	for(int n=0; n<=16; n++){
		val += (pow(-1,n) * pow(x, (2*n)+1)/fact);
		cout<<"val"<<n<<" : "<<val<<endl;
		fact *= (2*(n+1)) * ((2*(n+1))+1);
	}
	return val;
}

int main(){
	double x;
	cout<<"Enter a angle in radian: ";
	cin>>x;
	cout<<"Value of sin("<<x<<") = "<<sine(x)<<"\n";
	return 0;
}
