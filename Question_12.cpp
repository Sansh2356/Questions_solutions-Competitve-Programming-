#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main()
{
    stack<char> st;
    string name = "love";
    string ans = "";
    st.push('l');
    st.push('o');
    st.push('v');
    st.push('e');
    for (int x = 0; x < name.size(); x++)
    {
        ans.push_back(st.top());
        st.pop();
    }
    cout<<ans<<endl;
}