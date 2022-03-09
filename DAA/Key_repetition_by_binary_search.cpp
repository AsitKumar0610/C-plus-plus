#include<iostream>
#define MAX 100
using namespace std ;
int main ()
{
    int i , n , arr[MAX] , key , count = 0 ;
    cout << "Enter the no. of elements you want to enter : ";
    cin>>n;
    cout << "Enter the elements : ";
    for(i = 0 ; i < n ; i++)
    {
        cin >> arr[i];
    } 
    cout << "Enter the key to find it's repetition : ";
    cin >> key;
    
    int low = arr[0] , high = arr[n-1] ;
    
         while(low <= high)
         {
         int mid = low + high / 2 ;
    
    
    //arr[mid] == key 
    
        if(arr[mid] == key)
        {
        count = 1 ;
        int a = mid - 1;
        while (arr[a] == key)
        {
            count++;
            a--;
        }
        int b = mid + 1 ;
        while(arr[b] == key)
        {
            count++;
            b++ ;
        }
        
        cout << "No. of time " << key << "present is " << count << "times";
        break ;
        }
        
        else if(key > arr[mid])
        {
            low = mid + 1;
        }
        
        else if(key < arr[mid])
        {
            high = mid - 1 ;
        }
    }
    if(count == 0)
    {
        cout << "Key not present in the array";
    }
}
