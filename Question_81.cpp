#include <iostream>
#include <math.h>
using namespace std;
//Points on Plane codeforces div-2 Problem-B//
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int k;
        cin >> k;
        long long int s = sqrt(k);
        cout << (s - 1) << endl;
    }
}
/*
creationof adjacency list or matrix consisting of list of all adeges and vertex using hash map,
making a hash map to keep record of the visited node.
a vector to store the traversal values
queue creation to make use of first in first out property 
*/