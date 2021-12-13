#include<bits/stdc++.h>
using namespace std ;

class date 
{
    public :
    int year ;
    int month ;
    int day ;
    
    int compare (date d3 , date d4)
    {
        if (d3.year == d4.year && d3.month == d4.month && d3.day == d4.day)
        {
            cout <<"Dates are equal" ;
        }
        else
        {
            if(d3.year != d4.year)
            {
                if(d3.year>d4.year)
                {
                cout<<"d1 is greater date than d2" ;
                }
                else
                {
                cout << "d2 is greater date than d1" ;
                }
                return -1 ;
            }
            
            else if (d3.month != d4.month)
            {
            if(d3.month>d4.month)
                cout<<"d1 is greater date than d2" ;
                else
                cout << "   d2 is greater date than d1 " ;
                return -1 ;
                }
            
            else (d3.day != d4.day);
            {
            if(d3.day>d4.day)
                cout<<"d1 is greater date than d2" ;
                else
                cout << "d2 is greater date than d1" ;
                return -1 ;
            }
            
        }
    }
};

int main ()
{
    date d1 , d2 ;
    cout << "Enter the first date";
    cin >> d1.day >> d1.month >> d1.year ;
    
    cout << "Enter the second date";
    cin >> d2.day >> d2.month >> d2.year ;
    
    d1.compare (d1 , d2);
}
