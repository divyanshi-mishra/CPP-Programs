#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int num;
cout<<"enter the range"<<endl;
cin>>num;
for(int i=1;i<=num;i++)
{
if((i%(3*5))==0)
{
cout<<" fizzbuzz ";
}
else if((i%3)==0)
{
cout<<" fizz ";
}
else if((i%5)==0)
{
cout<<" buzz ";
}
else
{
cout<<""<<i;
}
}
return 0;
}
