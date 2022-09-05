#include<iostream>

using namespace std;

int main(){
	int a,b;
	cout<<"Insert the first number: a = ";
	cin>>a;
	cout<<"Insert the Second number: b = ";
	cin>>b;
	a = a+b;
	b = a-b;
	a = a-b;
	cout<<"Exchanged numbers\n";
	cout<<"\na = "<<a;
	cout<<"\nb = "<<b;
	return 0;
}
