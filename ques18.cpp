// write a program to remove the 
// duplicate values from an ordered array of N elements

#include<iostream>

using namespace std;

int main(){
  int n;
  cout<<"Enter the number of elements in an array: ";
  cin>>n;

  int arr[n], dup[n];
  cout<<"Enter the elements one by one:"<<endl;
  for(int i=0; i<n; i++){
    cout<<"Enter the "<<i<<" element in array: ";
    cin>>arr[i];
  }

  bool toAdd = true;
  int cur = 0;

  for(int i=0; i<n; i++){
    toAdd = true;
    for(int j=0; j<i; j++){
      if(arr[i]==arr[j]){
        toAdd = false;
      }
    }
    if(toAdd){
      dup[cur] = arr[i];
      cur++;
    }
  }

  cout<<"New array after removing the duplictes:"<<endl;
  for(int i=0; i<cur; i++){
    cout<<dup[i]<<"  ";
  }

  return 0;
}