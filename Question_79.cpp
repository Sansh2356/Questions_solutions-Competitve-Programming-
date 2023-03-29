#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
//Codeforces div-2 Garland solution//
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        unordered_map<int, int> m;
        string b;
        cin>>b;
        for (int z = 0; z < 4; z++)
        {
            int num = b[z];
            if (m.count(num) == true)
            {
                m[num] = m[num] + 1;
            }
            else
            {
                m[num] = 1;
            }
        }
        if (m.size() == 4)
        {
            cout << 4 << endl;
        }
        else if (m.size() == 1)
        {
            cout << -1 << endl;
        }
        else if (m.size() == 3)
        {

            cout << 4 << endl;
        }
        else
        {
            vector<int> rand;
            for (auto i : m)
            {
                rand.push_back(i.second);
            }
            if (rand[0] == rand[1])
            {
                cout << 4 << endl;
            }
            else if (rand[0] != rand[1])
            {
                cout << 6 << endl;
            }
        }
    }
}
