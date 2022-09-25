#include<iostream>
#include<cmath>

using namespace std;

//  Write a program to compute all the prime factors of a given integer.

void primeFactor(int num){
  int x = num, xRoot = sqrt(num);
  cout<<"Prime Factor of a given number : "<<endl;
  for(int i=2; i<= xRoot; i++){
    while(x % i == 0 ){
      cout<<i<<" ";
      x /= i;
    }
  }
  if(x != 1 ){
    cout<<x;
  }
  return ;
}

int main(){
  int num;
  cout<<"Enter a number to find it's prime factors : ";
  cin>>num;
  primeFactor(num);
  return 0;
}