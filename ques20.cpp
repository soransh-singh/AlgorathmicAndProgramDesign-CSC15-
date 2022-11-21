#include<iostream>

using namespace std;

int partition(int arr[], int first, int last);
void quicksort(int arr[], int first, int last);

void quicksort(int arr[], int first, int last){
  int pivot;
  if(first<last){

    pivot = partition(arr, first, last);
    quicksort(arr, first, pivot-1);
    quicksort(arr, pivot+1, last);
  }
}

int partition(int arr[], int first, int last){
  int elem = arr[last];
  int temp[last - first + 1];
  int current=0;
  for(int i=first; i<last; i++){
    if(arr[i]<=elem){
      temp[current] = arr[i];
      current++;
    }
  }

  temp[current]=elem;
  int pivot = current;
  current++;

  for(int i=first; i<last; i++){
    if(arr[i]>elem){
      temp[current] = arr[i];
      current++;
    }
  }

  for(int i=0; i<=last; i++){
    arr[first+i]=temp[i];
  }

  return pivot;
  
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

  quicksort(arr, 0, n-1);

  for(int i=0; i<n; i++){
    cout<<"the "<<i<<" element in array is: "<<arr[i]<<endl;
  }

  return 0;
}