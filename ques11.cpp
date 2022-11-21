#include<iostream>
using namespace std;

void randomNumbers(){
  cout<<"Hello world";
  return;
}

int main(){
  int a, b, mod, Xinitial, xcurrent;
  cout<<"Enter a multiplier: ";
  cin>>a;
  cout<<"Enter a increment: ";
  cin>>b;
  cout<<"Enter a increment: ";
  cin>>b;
  Xinitial = 1;
  xcurrent = Xinitial;
  mod = 5;


  for(int i=0; i<10;i++){
    xcurrent = (xcurrent*a + b) % mod;
    cout<<xcurrent<<" ";
  }
  return 0;
}