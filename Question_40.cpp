#include<iostream>
using namespace std;
int main(){
    //Q)Yet another promotion Codeforces (div2 problem 1)//
    int t;
    cin>>t;
    while(t--){
        long long a,b,n,m;
        scanf("%lld%lld%lld%lld",&a,&b,&n,&m);
        /*
        1st case buying all the potatoes at a 
        2nd case buying all the potatoes at b
        1st case will include promotion but it will exclusively use a and 2nd case will not include promotion and will exclusively use b only
        3rd case buying potatoes from a and remaining from b hence it will use the idea of promotion and the remaing will be bought from b hence the minimum of the above will be compared.
        */
       long long minimum;
       if(m>n || m==n){
        minimum = min(a*n,b*n);
        printf("%lld \n",minimum);
       }
       else{
        long long x = (n/(m+1));
        long long y = n%(m+1);
        long long ans1 = min(a*m*x+y*a,b*n);
        long long ans2 = min(ans1,a*m*x+y*b);
        printf("%lld \n",ans2);
       }
    }
}