#include<iostream>

using namespace std;

void sort(int* arr, int n){
  int temp;
  for(int i=0; i<n; i++){
    for(int j=i+1; j<n; j++){
      if(arr[i]>arr[j]){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
}


int linear_search(int arr[], int size, int val){
  for(int i=0; i<size; i++)
    if(arr[i] == val)
      return i+1;
  return -1;
}


int binary_search(int arr[], int size, int val){
  int start = 0;
  int last = size-1;
  int middle;
  while(start<=last){
    middle = (start+last)/2;
    if (arr[middle]==val){
      return middle+1;
    }else if(arr[middle]>val){
      last=middle-1;
    }else{
      start=middle+1;
    }
  }
  return -1;
}


int main(){
  int n, var;

  cout<<"Enter the number of elements in a array: ";
  cin>>n;

  int arr[n];
  cout<<"Enter the elements in a array one by one\n";
  for(int i=0; i<n; i++)
    cin>>arr[i];
  
  cout<<"Enter the element you want to search: ";
  cin>>var;

  int pos = linear_search(arr, n, var);
  if(pos ==-1){
    cout<<"Element not found";
  }else{
    cout<<"Position of element in unsorted list "<<pos<<endl;
  }
  

  cout<<"Sorted array: ";
  sort(arr, n);
  for(int i=0; i<n; i++)
    cout<<arr[i]<<" ";
  cout<<endl;

  pos = binary_search(arr, n, var);
  if(pos==-1){
    cout<<"Element not found";
  }else{
    cout<<"Position of element in sorted list "<<pos<<endl;
  }

  return 0;
}
