#include<iostream>
#define MAX 100
using namespace std ;
int main ()
{
    int n , i , j , arr[MAX] , temp ;
    cout << "Enter the size of the array : ";
    cin >> n ;
    
    cout << "Ente the elements of the array : ";
    for(i = 0 ; i < n ; i++)
    {
        cin >> arr[i];
    }
    
    for(i = 0 , j = n-1 ; i < n/2 ; i++ , j--)
    {
        temp = arr[i] ;
        arr[i] = arr[j];
        arr[j] = temp ;
    }
    
    cout << "Reversed array : " ;
    for(i = 0 ; i < n ; i++)
    {
        cout << arr[i] << " " ;
    }
}
