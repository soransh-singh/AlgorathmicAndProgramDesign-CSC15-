#include<iostream>

using namespace std;

void selectionSort(int* arr, int n){
  
  for(int i=0; i<n; i++){
    int min=arr[i];
    int cur=i;
    for(int j=i+1; j<n; j++){
      if(min>arr[j]){
        min=arr[j];
        cur=j;
      }
    }
    int temp = arr[cur];
    arr[cur] = arr[i];
    arr[i] = temp;
  }
}
int main(){
  int n;
  cout<<"Enter the number of elements in array: ";
  cin>>n;
  int list[n];
  cout<<"Enter the elements one after another: "<<endl;
  for(int i=0; i<n; i++){
    cin>>list[i];
  }
  selectionSort(list, n);
  cout<<"Sorted elements: ";
  for(int i=0; i<n; i++){
    cout<<list[i]<<" ";
  }
  return 0;
}