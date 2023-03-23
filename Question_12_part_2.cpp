#include <iostream>
using namespace std;
#include <stack>
#include <string>
int main()
{
    stack<int> st2;
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    int count = 0;
    int f = st.size();
    while (count != f / 2 + 1)
    {
        count++;
        if (count == f / 2 + 1)
        {
            st.pop();
            break;
        }
        st2.push(st.top());
        st.pop();
    }

    // cout<<st2.size();
    // cout<<st.size();
    for (int x = 0; x < st2.size() + 1; x++)
    {
        st.push(st2.top());
        st2.pop();
    }
    // cout<<st2.size();
    // cout<<st.size();
    //    cout<<st.top();
}
