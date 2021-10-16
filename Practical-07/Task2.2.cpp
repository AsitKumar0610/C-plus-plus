//Task2.2

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

for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
{

  cout<<10-arr[i][j]<<" ";
  }
  cout<<endl;
  }
  }
