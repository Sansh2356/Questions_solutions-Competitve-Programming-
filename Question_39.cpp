#include <iostream>
#include <vector>
#include <queue>
using namespace std;
//Q)Best time to sell a stock(easy version) O(n) time and O(1) space complexity//
int main()
{
vector<int>prices;
int mx = 0;
int t = prices[0];
int size = prices.size();
for(int m=1;m<size;m++){
  if(prices[m] < t){
    t = prices[m];
  } 
  else{
    mx = max(t,prices[m]-t);
  }
}
return mx;

}