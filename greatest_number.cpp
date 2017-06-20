#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int a,b,c;
cout<<"enter the 3 numbers:"<<endl;
cin>>a>>b>>c;
if(a>b && a>c)
{
cout<<"the biggest number is "<<a;
}
if(b>a && b>c)
{
cout<<"The biggest number is " <<b;
}
if(c>a && c>b)
{
cout<<"The biggest number is " <<c;
}
return 0;
}
