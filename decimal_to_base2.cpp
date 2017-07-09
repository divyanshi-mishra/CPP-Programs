#include <stdio.h>
#include <string.h>
#include <malloc.h>

#include <iostream>


using namespace std;

void show_binary(int u)
{
cout << "Enter number to convert to base 2" << endl;

cin >> u;

while(u > 1)
{
if((u % 2) == 0)
{
cout << "0";
}
else
{
cout << "1";
}

u = u >> 1;
}

cout << "1" << endl;

}


int main(int argv, char *argv[])
{

int number = 132;
show_binary(number);

return 0;
}
