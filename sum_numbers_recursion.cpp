#include<iostream>
#include<conio.h>
using namespace std;
int add(int n);
int main ()
{int n;
cout<<"enter the positive number";
cin>>n;

cout<<"sum ="<<add(n);
return 0;
}
int add(int n)
{
if(n!=0)
return n+add(n-1);
return 0;
}
