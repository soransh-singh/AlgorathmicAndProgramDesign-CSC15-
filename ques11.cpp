#include<iostream>
using namespace std;

void randomNumbers(int a, int b, int mod, int xinitial){
  int xcurrent = xinitial;
  for(int i=0; i<mod; i++){
    xcurrent = (xcurrent*a + b)%mod;
    cout<<xcurrent<<" ";
  }
  return;
}

int main(){
  int a, b, mod, xinitial, xcurrent;
  cout<<"Enter a multiplier: ";
  cin>>a;
  cout<<"Enter a increment: ";
  cin>>b;
  cout<<"Enter a initial value for sequence: ";
  cin>>xinitial;
  cout<<"Value of mod should be greater thn multiplier and increment\n";
  cout<<"Enter the value of mod: ";
  cin>>mod;
  randomNumbers(a, b, mod, xinitial);
  return 0;
}
