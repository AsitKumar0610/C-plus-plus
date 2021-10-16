//Task 1:

#include<iostream>
#include<ctime>
using namespace std ;
int main ()
{
int d,m,y ;
char c ;
cout << "Enter d for date " << endl <<"Enter m for month "<<endl << "Enter y for year" << endl ;
cin >> c ;

time_t now = time(0);
tm*ltm  = localtime(&now);
switch(c)

{

case 'd' :
          cout << "Day: " << ltm->tm_mday << endl ;
          break ;
          
case 'm' :
           cout << "Month: "<< 1+ ltm -> tm_mon<<endl ;
           break ;
           
case 'y' :
           cout << "Year: "<< 1900 + ltm -> tm_year<<endl ;
           break ;
}
}
