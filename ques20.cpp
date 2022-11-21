#include<iostream>

using namespace std;

void quicksort(int arr[], int first, int last){
  int pivot;
  if(low<high){
    pivot = partition(arr, first, last)
  }
  return;
}

int main(){
  int n;
  cout<<"Enter the number of elements in an array: ";
  cin>>n;

  int arr[n];
  cout<<"Enter the elements one by one:"<<endl;
  for(int i=0; i<n; i++){
    cout<<"Enter the "<<i<<" element in array: ";
    cin>>arr[i];
  }

  quicksort(arr, n);

  for(int i=0; i<n; i++){
    cout<<"the "<<i<<" element in array is: "<<arr[i];
  }

  return 0;
}