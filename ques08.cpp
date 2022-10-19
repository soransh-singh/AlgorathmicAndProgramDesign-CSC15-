#include<iostream>
#include<string>
#include<cmath>

using namespace std;

// convert a decimal number into
// - Binary
string decToBin(int num){
	int x=num;
	string str="";
	while(x != 0){
		if(x % 2 == 0){
			str = '0' + str;
		}else{
			str = '1' + str;
		}
		x /= 2;
	}
	return str;
}

// - Octal
int decToOctal(int num){
	int x=num, oct=0, i=0;
	while(x != 0){
		int temp = x%8;
		oct = oct + temp*pow(10,i);
		x /= 8;
		i += 1;
	}
	return oct;
}
// - Hexadecimal
string decToHexa(int num){
	int x=num;
	string str = "";
	char dig;
	while(x !=0){
		int temp = x % 16;
		if( temp < 10){
			dig = (char)'0' + temp;
			str =  dig + str;
		}else{
			dig = (char)'A' - 10 + temp;
			str =  dig + str;
		}
		x /= 16;
	}
	return str;
}
int main(){
	int num;
	cout<<"TO find equivalent Binary, Octal and Hexadecimal Values."<<endl;
	cout<<"Enter a Number : ";
	cin>>num;
	cout<<"Binary Value: "<<decToBin(num)<<endl;	
	cout<<"Octal Value: "<<decToOctal(num)<<endl;
	cout<<"Hexadecimal Value : "<<decToHexa(num)<<endl;	
	return 0;
}
