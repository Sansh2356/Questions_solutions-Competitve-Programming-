#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int index = -1;
    int max;
    for (int i = 0; i < 4; i++)
    {
        index = i;
        for (int j = i + 1; j < 5; j++)
        {
            if (arr[index] < arr[j])
            {
                index = j;
            }
        }
        swap(arr[index], arr[i]);
    }
    for (int y = 0; y < 5; y++)
    {
        cout << arr[y] << endl;
    }
}
