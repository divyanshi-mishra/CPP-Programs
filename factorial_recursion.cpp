#include<iostream>
#include<conio.h>
using namespace std;
int fact(int n);
int main()
{
int n ;
cout<<"enter the positive number"<<endl;
cin>>n;
cout<<"Factorial="<<fact(n);
return 0;
}
int fact(int n)
{
if(n>1)
return n*fact(n-1);
else
return 1;
}
