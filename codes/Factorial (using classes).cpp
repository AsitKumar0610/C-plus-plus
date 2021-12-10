#include<iostream>
using namespace std ;

class A 
{
    int n, n1, fact = 1 ;
    public :   
    void input ();
    void calculate () ;
    void display () ;
};

void A :: input ()
{
    cout << "Enter a number : ";
    cin >> n ;
}

void A :: calculate ()
{
    n1 = n ;
    if (n == 0 || n == 1)
    {
        cout << "Factorial of the number is 1" << endl ;
    }
    else
    {
        while(n != 0)
        {
            fact = fact * n ;
            n-- ;
        }
    }
}

void A :: display ()
{
    cout << "The factorial of "<<n1 <<" is "<< fact << endl ;
}

int main ()
{
    A f ;
    f.input ();
    f.calculate () ;
    f.display ();
}
