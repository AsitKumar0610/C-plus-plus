#include<iostream>
using namespace std;

void highFreq(int arr[], int n)
{
    int i , j, r, count = 0;
    if (n%2 == 0)
    {
        r = n / 2 ;
    }
    else
    {
        r = n+1/2 ;
    }
    
    for(i = 0 ; i < n ; i++)
    {
        count = 0 ;
        for(j = i+1 ; j  <= n ; j++)
        {
            if(arr[j] == arr[i])
            {   
                count++;
                arr[j] = '\0' ;
            }
        }
        if(count >= r)
        {
            if(arr[i] != '\0')
            {
            cout << arr[i] << " " ;
            }
        }
    }
    
}

int main ()
{
    int i , n ;
    cout << "Enter the size of the array : ";
    cin >> n ;
    int a[n] ;
    cout << "Enter the elements of the array : ";
    for(i = 0 ; i < n ; i++)
    {
        cin >> a[i];
    }
    
    highFreq (a,n);
}
