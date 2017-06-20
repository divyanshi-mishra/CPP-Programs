#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int orig_num,digit,n,sum=0;
cout<<"enter the original number"<<endl;
cin>>orig_num;
n=orig_num;
while(n!=0){
digit=n%10;
sum=sum+(digit*digit*digit);
n=n/10;
}
if(sum==orig_num)
{
cout<<"the number is an amstrong number"<<endl;
}
else
{
cout<<"not an amstrong number"<<endl;
}
return 0;
}
