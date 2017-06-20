#include<iostream>
#include<conio.h>
using namespace std;
int checkprime(int);
int main()
{int n=0;
for(int j=0;j<50000;j++){
cout<<"enter the positive number"<<endl;
cin>>n;
if(checkprime(n)==0)
   cout<<n<<"the number is prime"<<endl;
    else
{cout<<n<<"the number is not prime"<<endl;
}
}
return 0;
}
int checkprime (int n){
 bool flag=false;
    for(int i=2;i<=(n/2);++i)
    {
        if(n%i==0){
        flag=true;
        break;
        }}
        return flag;
    }




