#include <iostream>
using namespace std;
#include <stack>

void check(stack<int> st, int f)
{
    // base case//
    if (st.size() == 0)
    {
        st.push(f);
        return;
    }
    int num = st.top();
    st.pop();
    check(st, f);
    st.push(num);
    for(int x=0;x<st.size();x++){
       cout<<st.top();
        st.pop();
    }
}
int main()
{
    stack<int> st;
    int element;
    cin>>element;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    check(st, element);
}