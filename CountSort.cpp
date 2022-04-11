#include<iostream>
#define MAX 100
using namespace std;

void countSort(int arr[],int size)
{
int output[size];
int count[size];
int max = arr[0];

for(int i = 1; i < size ;i++)
{
if(arr[i] > max)
max= arr[i];
}

for(int i = 0 ; i <= size ; i++)
{
count[i]=0;
}

for(int i = 0 ; i < size ; i++)
{
count[arr[i]]++ ;
}

for(int i = 1; i <=max ;i++)
{
count[i] += count[i-1];
}

for(int i = size -1 ; i >= 0 ;i--)
{
output[count[arr[i]]-1] = arr[i] ;
count[arr[i]]--;
}

for(int i = 0 ; i < size ; i++)
{
arr[i] = output[i];
}
}

void printArray(int arr[], int n)
{
for(int i =0 ; i < n; i++)
{
cout << arr[i] <<endl;
}
}

int main ()
{
int i , n ;
cout << "Enter the size of array : ";
cin >> n ;
int a[n];
cout << "Enter the elements of the array : ";
for(i = 0 ; i < n ; i++)
{
cin >> a[i];
}
countSort(a,n);
printArray(a,n);
}

