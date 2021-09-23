#include <iostream>
using namespace std;
void prime()
{
int i,j,f;
 for(i=101;i<=199;i++)
{
   f=0;
    for(j=2;j<=(i/2);j++)
    {
      if(i%j==0)
{
          f=1;
          break;
         }
    }
  if(f==0)
   cout<<i<<endl;
}
}
int main()
{
  prime();
return 0;
}
