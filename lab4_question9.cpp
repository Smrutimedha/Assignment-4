#include <iostream>
#include <cmath>
using namespace std;

int perfect(int num1, int num2)
{ 
  int tnum,sum,dig;
  int j=num1;
  while(j<=num2)
  {
  int i=1,sum=0;
  while(i<j)
  {
    if(j%i==0)
      sum=sum+i;
    i++;
  }
  if(sum==j)
         cout <<"\n"<< j  <<  " is a perfect number";
 j++;
 }
  return 0;
  }
int main()
{
  int num1=0,num2=0;
  cout<<"\nENTER THE LOWER LIMIT: ";
  cin>>num1;
  cout<<"\nENTER THE UPPER LIMIT: ";
  cin>>num2;
  int a=perfect(num1,num2);
  return a;
}
