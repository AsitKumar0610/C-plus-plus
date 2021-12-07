#include<bits/stdc++.h>
using namespace std ;

class A
{
    public :
    void display ()
    {
        cout << "This is display method from Base class A" << endl ;
    }
};

class B : public A 
{
    public :
    void display1 ()
    {
        cout << "This is display1 method from class B" << endl ;
    }
};

class C : public A 
{
    public :
    void display2 ()
    {
        cout << "This is display2 method from class C" << endl ;
    }
};

class D : public B, public C 
{
 // conatains two display functions , how ?
};

int main ()
{
    
    D d1 ;
    d1 . display ()
    return 0 ;
}
