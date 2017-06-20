#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int i,sum=0;
int n;
cout<<"enter the sum of natural numbers"<<endl;
cin>>n;
for(i=1;i<=n;i++)
{
sum=sum+i;
}
cout<<"sum="<<sum;
return 0;
}
