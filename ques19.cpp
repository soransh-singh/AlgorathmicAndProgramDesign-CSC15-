//19. Write a program to rearrange the elements in an array
// of N elements so that they appear in order  
// using insertion sort. 

#include<iostream>

using namespace std;

int main(){
  int n, cur;
  cout<<"Enter the number of elements in an array: ";
  cin>>n;

  int arr[n];
  cout<<"Enter the elements one by one:"<<endl;
  for(int i=0; i<n; i++){
    cout<<"Enter the "<<i<<" element in array: ";
    cin>>arr[i];
  }

  for(int i=0; i<n; i++){
    int val = arr[i]; 
    cur=i;
    for(int j=i-1; j>=0; j--){
      if(arr[j]>val){
        arr[j+1]=arr[j];
        cur= j;
      }
    }
    arr[cur]=val;
  }

 
  cout<<"Sorted array: "<<endl;
  for(int i=0; i<n; i++){
    cout<<arr[i]<<"  ";
  }

  return 0;
}