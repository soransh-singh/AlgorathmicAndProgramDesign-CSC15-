#include<iostream>

using namespace std;

void add(){
  int row, col, num=2;
  cout<<"\nEnter the no of rows of matrix: ";
  cin>>row;
  cout<<"\nEnter the no of columns of matrix: ";
  cin>>col;
  int arr[num][row][col], sum[row][col];

  for(int j=0; j<row; j++){
    for(int k=0; k<col; k++){
    sum[j][k] = 0;
    }
  }

  for(int i=0; i<num; i++){
    cout<<"Enter "<<i+1<<" matrix: \n";
    for(int j=0; j<row; j++){
      for(int k=0; k<col; k++){
        cout<<(char)('A'+i)<<"["<<j+1<<"]["<<k+1<<"] = ";
        cin>>arr[i][j][k];
      }
    }
  }

  for(int i=0; i<num; i++){
    for(int j=0; j<row; j++){
      for(int k=0; k<col; k++){
      sum[j][k] += arr[i][j][k];
      }
    }
  }

  cout<<"The sum of a given two matrix is: \n";
  for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
      cout<<sum[i][j]<<"  ";
    }
    cout<<endl;
  }
  return ;
}

void multiply(){
  int row1, col1, row2, col2;
  cout<<"Enter number of rows of first matrix: ";
  cin>>row1;
  cout<<"Enter number of coloumns of first matrix: ";
  cin>>col1;
  cout<<"Enter number of rows of second matrix: ";
  cin>>row2;
  cout<<"Enter number of columns of second matrix: ";
  cin>>col2;

  if(col1 != row2){
    cout<<"The given dimension of matrix is not multiplicable";
    cout<<"Column of first matrix should be equal to rows od second";
    return ;
  }

  int arr1[row1][col1], arr2[row2][col2], sum[row1][col2];

  cout<<"Enter first array: \n";
  for(int i=0; i<row1; i++){
    for(int j=0; j<col1; j++){
      cout<<"A["<<i+1<<"]["<<j+1<<"] = ";
      cin>>arr1[i][j];
    }
    cout<<endl;
  }

  cout<<"Enter Second array: \n";
  for(int i=0; i<row2; i++){
    for(int j=0; j<col2; j++){
      cout<<"B["<<i+1<<"]["<<j+1<<"] = ";
      cin>>arr2[i][j];
    }
    cout<<endl;
  }
  
  for(int i=0; i<row1; i++){
    for(int j=0; j<col2; j++){
      sum[i][j]=0;
      for(int k=0; k<row2; k++){
        sum[i][j]+= arr1[i][k]*arr2[k][j];
      }
    }
  }

  cout<<"The sum of a given two matrix is: \n";
  for(int i=0; i<row1; i++){
    for(int j=0; j<col2; j++){
      cout<<sum[i][j]<<"  ";
    }
    cout<<endl;
  }

  return ;
}

int main(){
  int choice;
  cout<<"Enter your choice\n";
  cout<<"Enter 1 for add and 2 for multiply an array\n";
  cin>>choice;
  switch(choice){
    case 1:
      add();
      break;
    case 2:
      multiply();
      break;
    default:
      cout<<"Entered a wrong choice\n";
  }
  return 0;
}