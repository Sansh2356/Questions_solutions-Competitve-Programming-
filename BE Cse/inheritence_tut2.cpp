#include<iostream>
using namespace std;
class demo{
    public:
    int a;
void get_data(int k){
    a = k;
}
    
};
demo operator +(demo &bb){
    demo cc,aa;
    cc.a = aa.a+bb.a;

}
int main(){
   demo aa,bb,cc;
   aa.get_data(4);
   bb.get_data(4);
   cc.a = aa.a+bb.a;

}