#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int n1,n2;
cout<<"enter the two numbers"<<endl;
cin>>n1>>n2;
int max=(n1>n2)?n1:n2;
do{
if(max % n1==0 && max % n2==0)
{
cout<<"LCM:  "<<max;
break;
}
else
++max;
}
while(true);
return 0;

}
