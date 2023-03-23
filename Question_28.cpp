#include <iostream>
using namespace std;
int power(int a, int b)
{
    //Base Case//
    if (b == 1)
    {
        return a;
    }
    int ans = a;
    ans = ans * power(a, b - 1);
    return ans;
}
int fac(int a){
    //Base Case//
    if(a == 1){
        return 1;
    }
    int ans = a;
    ans = ans*fac(a-1);
    return ans;
}
int main()
{
    int a, b;
    cin >> a >> b;
    int ans;
    int fact;
    fact = fac(a);
    ans = power(a, b);
    cout<<ans<<"::::::"<<fact<<endl;
}