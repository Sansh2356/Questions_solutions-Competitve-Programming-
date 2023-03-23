#include <iostream>
#include <stack>
#include <queue>
using namespace std;
//Q)Reverse a given queue upto k//
void reverse(queue<int> q, int k)
{
  int count = 0;
  int num;
  while (count != q.size() - k)
  {
    count++;
    num = q.front();
    q.pop();
    q.push(num);
  }
  cout << q.front() << endl;
  q.pop();
  cout << q.front() << endl;
  q.pop();
  cout << q.front() << endl;
  q.pop();
  cout << q.front() << endl;

}
void check(queue<int> q, int k)
{
  stack<int> st;
  int count = 0;
  int count2 = 0;
  while (count != k)
  {
    count++;
    st.push(q.front());
    q.pop();
  }

  while (count2 != k)
  {
    count2++;
    q.push(st.top());
    st.pop();
  }
  reverse(q, k);
}
int main()
{
  int k = 3;
  queue<int> q;
  q.push(1);
  q.push(2);
  q.push(3);
  q.push(4);
  check(q, k);
}