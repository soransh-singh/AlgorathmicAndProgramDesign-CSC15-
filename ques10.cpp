#include<iostream>
#include <iomanip>

using namespace std;

int encrypt(int data){
  int x=data, code=0;
  int dig[4];
  // Replace each digit by (the sum of that digit and 7) modulus 10.
  for(int i=0; i<4; i++){
    dig[i] = x%10;
    dig[i] = (dig[i]+7)%10;
    x /= 10;
  }
  // swap the first digit with third, and second with the fourth
  dig[0] = dig[0] + dig[2];
  dig[2] = dig[0] - dig[2];
  dig[0] = dig[0] - dig[2];

  dig[1] = dig[1] + dig[3];
  dig[3] = dig[1] - dig[3];
  dig[1] = dig[1] - dig[3];
  // for(int i=0; i<2; i+=2){
  //   temp = dig[i];
  //   dig[i+2] = temp;
  //   dig[i] = dig[i+2];
  //   cout<<dig[i]<<dig[i+2];
  // }
  for(int i=3; i>=0; i--){
    code= code*10 + dig[i];
  }
  return code;
}

int decrypt(int code){
  int x=code, data=0;
  int dig[4];
  for(int i=0; i<4; i++){
    dig[i] = x%10;
    dig[i] = (dig[i] - 7 + 10)%10;
    x /= 10;
  }
  dig[0] = dig[0] + dig[2];
  dig[2] = dig[0] - dig[2];
  dig[0] = dig[0] - dig[2];

  dig[1] = dig[1] + dig[3];
  dig[3] = dig[1] - dig[3];
  dig[1] = dig[1] - dig[3];
  for(int i=3; i>=0; i--){
    data= data*10 + dig[i];
  }
  return data;
}

int main(){
  int data;
  cout<<"Enter a data to encrypt: ";
  cin>>data;
  cout<<"Encrypted data : "<<setfill('0') << setw(4)<<encrypt(data)<<endl;
  cout<<decrypt(encrypt(data));
  return 0;
}