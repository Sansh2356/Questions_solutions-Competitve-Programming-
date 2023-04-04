#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;
int main()
{
    //Q)Codeforces div 3 insert digit // 
    int t;
    cin >> t;
    while (t--)
    {
        int n, b;
        cin >> n >> b;
        string s;
        cin >> s;
        bool flag = true;
        string ans = "";
        if (b == 0)
        {
            ans.push_back(to_string(b)[0]);
            cout << (s + ans) << endl;
            continue;
        }
        if (b == 1)
        {
            for (int y = 0; y < n; y++)
            {
                char ch2 = s[y];
                if (ch2 == '0' && flag == true)
                {
                    ans.push_back(to_string(b)[0]);
                    ans.push_back(ch2);
                    flag = false;
                }
                else if (y == (n - 1) && flag == true)
                {
                    ans.push_back(ch2);
                    ans.push_back(to_string(b)[0]);
                    flag = false;
                }
                else
                {
                    ans.push_back(ch2);
                }
            }
        }
        if (flag == false)
        {
            cout << ans << endl;
            continue;
        }
        for (int m = 0; m < n; m++)
        {
            char ch = s[m];
            if (ch < (to_string(b)[0]) && flag == true)
            {
                ans.push_back(to_string(b)[0]);
                ans.push_back(ch);
                flag = false;
            }
            else
            {
                ans.push_back(ch);
                if(m == (n-1) && flag  == true){
                    ans.push_back(to_string(b)[0]);
                }
            }
        }
        cout << ans << endl;
    }
}