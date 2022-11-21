#include<iostream>

using namespace std;

int main(){
  int n, min, max;
  cout<<"Enter the number of elements in an array: ";
  cin>>n;

  int arr[n];
  cout<<"Enter the elements one by one:"<<endl;
  for(int i=0; i<n; i++){
    cout<<"Enter the "<<i<<" element in array: ";
    cin>>arr[i];
  }

  min = arr[0];
  max = arr[0];
  for(int i=0; i<n; i++){
    if(min > arr[i]){
      min = arr[i];
    }

    if(max < arr[i]){
      max = arr[i];
    }
  }

  cout<<"\nMinimum values stored in array: "<<min;
  cout<<"\nMaximum values stored in array: "<<max;

  return 0;
}