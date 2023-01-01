// In a mastermind game, the code maker hides a secret code consisting of 4 digits, and 
// the code breaker is to provide 4-digit guess codes until he gets the code right. The code 
// maker gives feedback in this manner, a sink is awarded to a perfect match of a digit plus 
// its position, and a hit refers to a right match of digit but in the wrong position. How do 
// you devise an algorithm to provide the correct feedback? First, work on the special case 
// that no digit in the code should be repeated. Then work on the general case where 
// digits can be duplicated. Also implement the algorithm.


#include<iostream>
#include<cmath>

using namespace std;

int main(){
  int code = 2365, guessCode,  hit, sink;
  int temp = code;
  int codeArr[4], guessArr[4];
  for(int i=0; i<4; i++){
    codeArr[i] = temp % 10;
    temp /= 10;
  }

  do{
    hit=0;
    sink=0;
    cout<<"Enter your guess code: ";
    cin>>guessCode;
    int guessTemp = guessCode;
    for(int i=0; i<4; i++){
      guessArr[i] = guessTemp % 10;
      guessTemp /= 10;
    }

    for(int i=0; i<4; i++){
      for(int j=0; j<4; j++){
        if(codeArr[i] == guessArr[j] ){
          if(i == j){
            sink++;
            break;
          }else if(i != j){
            hit++;
            break;
          }
        }
      }
    }
    
    cout<<"Sink: "<<sink<<endl;
    cout<<"Hit: "<<hit<<endl;
  }while(sink != 4);

  cout<<"Greattt!!!... you have find the given code "<<code;

  return 0;
}