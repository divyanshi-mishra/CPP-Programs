#include<iostream>
#include<math.h>
using namespace std;
float area(int x1,int y1,int x2,int y2,int x3,int y3)
{
return (x1*(y2-y3)+ x2*(y3-y1)+x3*(y1-y2))/2.0;
}
bool isinside(int x,int y,int x1,int y1,int x2,int y2,int x3,int y3)
{

   float A = area (x1, y1, x2, y2, x3, y3);


   float A1 = area (x, y, x2, y2, x3, y3);


   float A2 = area (x1, y1, x, y, x3, y3);


   float A3 = area (x1, y1, x2, y2, x, y);


   return (A == A1 + A2 + A3);
}
int main()
{
int x,y,x1,y1,x2,y2,x3,y3;
cin>>x1>>y1>>x2>>y2>>x3>>y3>>x>>y;
if(isinside(x,y,x1,y1,x2,y2,x3,y3))
{
cout<<"inside";
}
else
{
cout<<"not inside";
}
return 0;
}
