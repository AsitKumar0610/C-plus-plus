//Task 3.1

#include<iostream>
using namespace std;
int main()
{
int k=1;
int arr[3][3];
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
{
  arr[i][j]=k;
  k++;
  }
}


for(int i=1;i<=3;i++)
{
for(int j=0;j<3;j++)
{
  cout<<i<< " ";
  }
  cout<<endl;
}
}
  
