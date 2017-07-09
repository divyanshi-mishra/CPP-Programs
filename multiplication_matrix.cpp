#include <iostream>
using namespace std;

int main()
{
    int a[20][20], b[20][20], mul[10][10], r1, c1, r2, c2, i, j, k;

    cout << "Enter number of rows and columns for first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter number of rows and columns for second matrix: ";
    cin >> r2 >> c2;

    cout << endl << "Enter elements of matrix 1:" << endl;
    for(i = 0; i < r1; ++i)
        for(j = 0; j < c1; ++j)
        {
            cout << "Enter element a" << i + 1 << j + 1 << " : ";
            cin >> a[i][j];
        }


    cout << endl << "Enter elements of matrix 2:" << endl;
    for(i = 0; i < r2; ++i)
        for(j = 0; j < c2; ++j)
        {
            cout << "Enter element b" << i + 1 << j + 1 << " : ";
            cin >> b[i][j];
        }


    for(i = 0; i < r1; ++i)
        for(j = 0; j < c2; ++j)
        {
            mul[i][j]=0;
        }


    for(i = 0; i < r1; ++i)
        for(j = 0; j < c2; ++j)
            for(k = 0; k < c1; ++k)
            {
                mul[i][j] += a[i][k] * b[k][j];
            }


    cout << endl << "Output Matrix: " << endl;
    for(i = 0; i < r1; ++i){
    for(j = 0; j < c2; ++j)
    {
        cout << " " << mul[i][j];

    }
cout<<endl;
    }
    return 0;
}
