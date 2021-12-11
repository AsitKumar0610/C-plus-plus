#include<iostream>
#define MAX 100
using namespace std ;

int main ()
{
    int a[MAX] , b[MAX] , i , n , temp , p , q ;
    
    cout << "Enter the size of the arrays : ";
    cin >> n ;
    
    cout << "Enter the elements of first arrays : ";
    
    for(i = 0 ;  i < n ; i++)
    {
        cin >> a[i] ;
    }
    
    cout << "Enter the elements of second array : " ;
    for(i = 0 ; i < n ; i++)
    {
        cin >> b[i];
    }
    
    for(i = 0 ; i < n ; i++)
    {
        temp = a[i];
        a[i] = b[i];
        b[i] = temp ;
    }
    
    cout << "\nElements of first array after swapping :";
    for(i=0;i<n;i++)
    {
        cout << a[i] << " " ;
    }
    
    cout  << "\nElements of second array after swapping : ";
    for(i= 0 ; i< n ;i++)
    {
        cout << b[i] << " " ;
    }
}
