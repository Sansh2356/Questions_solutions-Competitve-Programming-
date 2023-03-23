#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <math.h>
#include <algorithm>
//Q)Valid anagram
using namespace std;
int main()
{

    map<char, int> m;
    int count = 0;
    map<char, int> t;
    // int count;
    // // Substrings of a given string//
    // string b;
    // string name = "anagram";
    // string empty = "";
    // vector<string> v;
    // for (int m = 0; m < name.size(); m++)
    // {
    //     char ch = name[m];
    //     empty.push_back(ch);
    //     for (int n = 0; n < name.size(); n++)
    //     {
    //         char ch2 = name[n];
    //         if (ch2 == empty[0])
    //         {
    //             continue;
    //         }
    //         empty.push_back(name[n]);
    //         v.push_back(empty);
    //     }
    //     empty = "";
    // }
    // for (int t = 0; t < v.size(); t++)
    // {
    //     cout << v[t] << endl;
    // }
    string names = "anshabls";
    string anagram = "ansblsah";
    for (int i = 0; i < names.length(); i++)
    {
        char ch = names[i];
        if (m.count(ch) == true)
        {
            m.at(ch) = m.at(ch) + 1;
        }
        else
        {
            m[ch] = 1;
        }
    }
    for (int i = 0; i < anagram.length(); i++)
    {
        char ch2 = names[i];
        if (t.count(ch2) == true)
        {
            t.at(ch2) = t.at(ch2) + 1;
        }
        else
        {
            t[ch2] = 1;
        }
    }
    for (int x = 0; x < anagram.length(); x++)
    {
        char ch3 = anagram[x];
        if (m.at(ch3) != t.at(ch3))
        {
            cout << "false" << endl;
            break;
        }
        else
        {
            count++;
        }
    }
    if (count == anagram.length())
    {
        cout << "true" << endl;
    }
    for (auto t : m)
    {
        cout << t.first << " " << t.second << endl;
    }
        for (auto f : t)
    {
        cout << f.first << " " << f.second << endl;
    }
}
