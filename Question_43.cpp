#include <iostream>
#include <vector>
using namespace std;
// Q)Modular arithmetic approach of the question divisibility array of a given array//
int main()
{
    string empty;
    cin >> empty;
    int x;
    cin >> x;
    vector<int> ans;
    int sum = 0;
    for (int m = 0; m < empty.length(); m++)
    {
        // Digit will be equal to its int value when we will subtract the ascii value of '0' from it //
        char ch = empty[m];
        int digit = ch - '0';
        sum = (10 * sum + (digit));
        if (sum % x == 0)
        {
            ans.push_back(1);
        }
        else if (sum % x != 0)
        {
            ans.push_back(0);
        }
    }
    for(int k=0;k<ans.size();k++){
        cout<<ans[k]<<endl;
    }
}