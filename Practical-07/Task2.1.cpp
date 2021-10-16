//Task2.1

#include<iostream>
using namespace std ;
int main ()
{
int k = 1 ;
int arr[3][3];
for(int i = 0 ; i < 3 ; i++)
{
    for(int j =0  ; j < 3 ; j++)
    {
        arr[i][j] = k ;
        k++;
    }
}

for(int i = 2 ; i >= 0 ; i--)
{
for(int j = 2 ; j>=0 ; j--)
{
    cout << arr[i][j] << " ";
    }
    cout << endl ;
    
  }
}
