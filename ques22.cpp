#include<iostream>

using namespace std;

void merge(int* A,int l,int mid,int h)
{
	int i=l,j=mid+1,k=l,B[h+1];
	while(i<=mid&&j<=h)
	{
		if(A[i]<A[j]) B[k++] = A[i++];
		else B[k++] = A[j++];
	}
	while(i<=mid) B[k++] = A[i++];
	while(j<=h) B[k++] = A[j++];
	
	for(i=l;i<=h;i++)
	{
		A[i] = B[i];
	}
}

void sort(int* arr, int start, int end){
  if(start<end){
    int mid = (start+end)/2;
    sort(arr,  start, mid);
    sort(arr,  mid+1, end);
    merge(arr, start, mid, end);
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

  sort(list, 0, n-1);
  cout<<"Sorted elements: ";
  for(int i=0; i<n; i++){
    cout<<list[i]<<" ";
  }

  return 0;
}