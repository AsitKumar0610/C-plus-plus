#include<iostream>
namespace first 
{
  void add(int a , int b)
  {
    std::cout<<a+b;
  }
}
namespace second 
{
  void add(float a, float b)
  {
    std::cout<<a+b;
  }
}
int main ()
{
  first::add(2,3);
  second::add(1.1,2.2);
}
