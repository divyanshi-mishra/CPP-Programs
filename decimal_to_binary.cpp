#include<iostream>
#include<conio.h>
using namespace std;
int binary(int num)
{
if(num<=1)
{
cout<<num;
return num;
}
int rem=num%2;
binary(num/2);
cout<<rem;
}
int main()
{
int num;
cout<<" enter the number";
cin>>num;
if(num<0)
{
cout<<"it is not a positive number";
}
else
cout<<"the binary form of "<<num<<" is ";
binary(num);
return 0;
}
