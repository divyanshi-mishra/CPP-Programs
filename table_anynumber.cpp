#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int n ,range;
cout<<"enter the positive number"<<endl;
cin>>n;
cout<<"enter the range"<<endl;
cin>>range;
for(int i=1;i<=range;i++)
{cout<<n<<"*"<<i<<"="<<n*i<<endl;
}
return 0;
}
