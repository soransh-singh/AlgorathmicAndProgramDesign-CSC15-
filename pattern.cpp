#include<iostream>
#include<cmath>
using namespace std;

int main(){
  int c;
  cout<<"enter a number: ";
  cin>>c;
  for(int i=0; i<c; i++){
    for(int j=0; j<c*5-1; j++){
      if(j<= c+i && j>=c-i){
      cout<<abs(j-c) + 1;
      }else{
        cout<<" ";
      }
    }
    cout<<endl;
  }
  return 0;
}