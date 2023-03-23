#include <iostream>
#define MACROS(x, a, c) (x > a && a > c || x > c && c > a)
using namespace std;
int main()
{
    int sum = 0;
    //Q)Multiplication of a matrix using pointers
    // Macros takes lesser time as compared to a function as it is already expanded in the source code before
    // comilation as compared to function but it increases the programme size as compared to ffunction which keep
    // it compact and lesser as comapared to a given macro.
    int rows, columns;
    cin >> rows >> columns;
    int array[rows][columns];
    int array2[3][3];
    int ans[3][3];
    for (int m = 0; m < rows; m++)
    {
        for (int t = 0; t < columns; t++)
        {
            cin >> array[m][t];
        }
    }
    for (int m = 0; m < 3; m++)
    {
        for (int t = 0; t < 3; t++)
        {
            cin >> array2[m][t];
        }
    }
    for (int f = 0; f < rows; f++)
    {
        for (int p = 0; p < 3; p++)
        {
            sum = 0;
            for (int t = 0; t < 3; t++)
            {
                *(ans[f]+p) = sum += *(array[f]+t) * *(array2[t]+p);
            }
        }
    }
    for (int o = 0; o < 3; o++)
    {
        for (int p = 0; p < 3; p++)
        {
            cout << ans[o][p] << " ";
        }
        cout << endl;
    }
}