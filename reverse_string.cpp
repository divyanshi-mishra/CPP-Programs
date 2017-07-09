#include<iostream>
#include<string.h>
using namespace std;
int main()
{
int i=0,j,temp;
char s[100];
cout<<"enter the string"<<endl;
cin>>s;
i=0;
j=strlen(s)-1;
while(i<j)
{
temp=s[i];
s[i]=s[j];
s[j]=temp;
i++;
j--;
}
cout<<"reverse of the string is:"<<s;
return 0;
}
