// parctical=5[task-2]

#include<iostream>
using namespace std;
void charfunction(void)
{
  char c='a';
  cout<<"char size variable:"<<sizeof(c)<<endl;
  cout<<"char size datatype:"<<sizeof(char)<<endl;
  }
void intfunction(void)
  {
  int i=1;
  cout<<"int size variable:"<<sizeof(i)<<endl;
  cout<<"int size datatype:"<<sizeof(int)<<endl;
  }
void longfunction(void)
  {
  long l=1234567890122899;
   cout<<"long size variable:"<<sizeof(l)<<endl;
  cout<<"long size datatype:"<<sizeof(long)<<endl;
  }
void floatfunction(void)
  {
  float f=1.0012f;
  cout<<"float size variable:"<<sizeof(f)<<endl;
  cout<<"float size datatype:"<<sizeof(float)<<endl;
  }
void widecharfunction(void)
  {
  wchar_t w=L'w';
   cout<<"wchar_t size variable:"<<sizeof(w)<<endl;
  cout<<"wchar_t size datatype:"<<sizeof(wchar_t)<<endl;
  }
void shortfunction(void)
  {
  short s=10;
   cout<<"short size variable:"<<sizeof(s)<<endl;
  cout<<"short size datatype:"<<sizeof(short)<<endl;
  }
void doublefunction(void)
  {
  double d=1.1414141;
   cout<<"double size variable:"<<sizeof(d)<<endl;
  cout<<"double size datatype:"<<sizeof(double)<<endl;
  }
 void boolenfunction(void)
  {
  bool b=(10>9);
   cout<<"bool size variable:"<<sizeof(b)<<endl;
  cout<<"bool size datatype:"<<sizeof(bool)<<endl;
  }
  
int main()
{
   charfunction();
   intfunction();
   longfunction();
   floatfunction();
   widecharfunction();
   shortfunction();
   doublefunction();
   boolenfunction();
   return 0;
   }
