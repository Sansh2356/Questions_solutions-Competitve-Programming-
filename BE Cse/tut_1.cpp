#include<iostream>
#include<cmath>
using namespace std;
//If a friend function is used for implementation then it will contribute to unary operator zero arg and for
//binary operator is used for single operator..

class a{
    private:
    int num2;
public:
int num1;
a(){};
a(int b){
    this->num1  = b;
}
void operator ~(){
    num1 = num1*num1;
}
friend void operator +(a ao,a bo);
friend  void mul(a ao2);
};
void  operator +(a ao,a bo){
    ao.num1 = ao.num1-1;
}
void mul(a ao2){
ao2.num1 =45;
}
int main(){
a ao2;
mul(ao2);

}
// class a{
//     public:
//     int f;
//     a(int c){
//         this->f = c;
//     }
//     int num2;
// };
// class b : public a{
//     public:
//     int num2;
//     b(int x,int b):
//     a(x)
//     {
//         this->num2 = b;
//     }
    
//     ~b(){
//         cout<<"Hello i am destructor"<<endl;
//     }
// };
// int main(){
// b bo(1,2);
// cout<<bo.f<<endl;
// }
// // int*sum(int *s,int k=129){
// //     cout<<s<<" "<<k<<endl;
// //     *s = *s+1;
// //     return(s);
// // }
// // inline void print(const int s = 6){
// //     cout<<"hello world";
// // }
// // void print(float f){
// // cout<<f<<endl;
// // }
// // class stu{
// //     public:
// //     void print();
// //     int*arr = new int();
// //     stu(int size){
// //         arr[size];
// //     }
// //     static void print2(){
// //         cout<<"I am a static member function"<<endl;
// //     }
// //     friend void print3(stu so2);
// //     private:
// //     int a;
// //     protected:
// //     int b;
// // };
// // inline void stu::print(){
// //     cout<<"hello world2"<<endl;
// // }
// // void print3(stu so2){
// //     cout<<"I am friend print3"<<endl;
// // }
// // int main(){
// //     // int*arr = new int[4];
// //     // delete arr;
// //     float num = 5.556;
// //     //Implicit typecasting hence there is loss of data.//
// //    cout<<char (num)<<endl;
// //    int s = 4;
// //    int*ptr = &s;
// //    sum(ptr,172);
// //    cout<<s<<endl;
// //    int*ptr2 = (sum(ptr));
// //    cout<<ptr2<<endl;
// //    print(4);
// //    stu so(2);
// //    //Above is explicit typecasting//
// //    //switch,if-else,conditional operator,looping//
// // }