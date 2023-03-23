#include <iostream>
using namespace std;
#include <stack>
#include <queue>
// Q)Reversing a queue//
void check(queue<int> q)
{
    stack<int> st;
    while (q.size() != 0)
    {
        st.push(q.front());
        q.pop();
    }
    while (st.size() != 0)
    {
        q.push(st.top());
        st.pop();
    }
}

int main()
{
    queue<int> q;
    q.push(4);
    q.push(3);
    q.push(1);
    q.push(10);
    q.push(2);
    q.push(6);
    check(q);
}