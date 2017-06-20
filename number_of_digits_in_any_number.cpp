#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,a=0;
    cout<<"enter the number"<<endl;
    cin>>n;
    while(n>0)
    {
        n=n/10;
        a++;
    }
    cout<<"the number of digits are  : "<<a<<endl;
    return 0;
}
