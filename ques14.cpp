#include<iostream>
#include<string>

using namespace std;

// "abcde", "acbcsded"
string common_sub(string str1, string str2){
  string val = "";
  int current = 0;
  int m = str1.length();
  int n = str2.length();

  for(int i=0 ; i<=m; i++){
    for(int j = current; j<=n; j++){
      if(str1[i] == str2[j]){
        val += str2[j];
        current = j+1;
        break;
      }
    }
  }
    
  return val;
}

string longest_common_sub(string str1, string str2){
  string seq1 = common_sub(str1, str2);
  string seq2 = common_sub(str2, str1);
  if(seq1.length()>seq2.length())
    return seq1;
  else
    return seq2;
}


//  Write a program to demonstrate the Longest Common Subsequence.
int main(){
  string str1, str2;
  cout<<"Enter the first sequence: ";
  cin>>str1;
  cout<<"Enter the second sequence: ";
  cin>>str2;
  cout<<"Longest common subsequence between "<<str1
    <<" and "<<str2<<" is "<<longest_common_sub( str1, str2);
  return 0;
}