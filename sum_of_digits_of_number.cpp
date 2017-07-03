#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int value,digit,sum=0;
cout<<"enter the number"<<endl;
cin>>value;
int num=value;
while(num!=0)
{
    sum=sum+num%10;
    num=num/10;
}
cout<<"the sum of digits of "<<value  <<" is "<<sum;
return 0;

}
