#include<iostream>
using namespace std;
class abc{
int num;
public:
abc(int x)
{
this->num=x;
}
void operator +(abc obj)
{
 cout<<num+obj.num;
}
};
int main()
{
  abc obj(10);
  abc obj1(20);
  obj+obj1;
  }
