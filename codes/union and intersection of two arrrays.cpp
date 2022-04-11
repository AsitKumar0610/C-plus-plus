#include<iostream>
#define MAX 100
using namespace std ;

void Un(int a[], int a1[], int n, int m)
{
    int i = 0, j = 0, count = 0;
    int U[MAX] ;
    while(i < n && j < m)
    {
        if(a[i] < a1[j])
        {
            cout << a[i++] << " " ;
        }
        
        else if(a1[j] < a[i])
        {
            cout << a1[j++] << " ";
        }
        
        else
        {
            cout << a1[j++] << " " ;
            i++ ;
        }
    }
    while ( i < n )
    {
        cout << a[i++] << " "; 
    }
    
    while( j < m )
    {
        cout << a1[j++]<< " ";
    }
    cout << endl ;
}
void insec(int arr1[], int arr2[], int m, int n) 
{ 
  int i = 0, j = 0; 
  while (i < m && j < n) 
  {  
    if (arr1[i] < arr2[j]) 
      i++; 
    else if (arr2[j] < arr1[i]) 
      j++; 
    else /* if arr1[i] == arr2[j] */
    { 
      cout << arr2[j] << " "; 
      i++; 
      j++; 
    }
  } 
}

int main ()
{
    int i , n , m ;
    cout  << "Enter the size of the 1st array : ";
    cin >> n ;
    int arr[n] ;
    cout << "Enter the  elements of the array : ";
    for(i = 0 ; i < n ; i++)
    {
        cin >> arr[i];
    }
    
    cout << "Enter the size of the 2nd array : ";
    cin >> m ;
    int arr1[m];
    cout << "Enter the elements of the second array : ";
    for(i = 0 ; i < m ; i++)
    {
        cin >> arr1[i];
    }
    
    Un(arr,arr1,n,m);
    insec(arr,arr1,n,m);
}
