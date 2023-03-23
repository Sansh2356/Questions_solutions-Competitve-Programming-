#include <iostream>
#include <queue>
#include <string>
#include <stack>
#include <map>
using namespace std;
// Q)To find first non-repeating character in a string//
int main()
{
    queue<char> q;
    string input;
    cin >> input;
    string output = "";
    map<char, int> count;
    for (int x = 0; x < input.length(); x++)
    {
        count[x]++;
        q.push(input[x]);
        while (!q.empty())
        {
            if (count[q.front()] > 1)
            {
                // Repeating character//
                q.pop();
            }
            else
            {
                // Non-repeating//
                output.push_back(q.front());
                break;
            }
            if (q.empty())
            {
                output.push_back('#');
            }
        }
    }
}