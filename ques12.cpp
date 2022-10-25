#include<iostream>

using namespace std;
// Given some integer x, write a program to compute the value of xn where n is positive number 
// considerably greater than 1

int power(int num, int var){
  if(var == 0){
    return 1;
  }else if(var == 1){
    return num;
  }
  else{
  return num * power(num, var-1);
  }
}

int main(){
  int num, pow;
  cout<<"Enter a number: ";
  cin>>num;
  cout<<"Enter a power to raise number: ";
  cin>>pow;
  cout<<num<<" ^ "<<pow<<" = "<<power(num,pow);
  return 0;
}
