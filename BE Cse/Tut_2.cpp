#include<iostream>
#include<string>
using namespace std;
class stu{
    public:
    static int age; 
    //int age = 4;
    string name;
    void get_name(string a);
    void set_and_show();
    void inc_age();
    void show_age();
};
void stu::get_name(string a){
    name = a;
}
void stu::set_and_show(){
    cout<<name<<endl;
}
void stu::inc_age(){
    age++;
}
void stu::show_age(){
    cout<<age<<endl;
}
int main(){
    stu so;
    //Initally the value of the static member function is zzero as soon as the first object is created it is
    //intitalized as 0 .
    //Inc_age will increment the age by 1 since it is a static member the member will pass tha value for all the other class objects
    //yet to be created as 1 and not as 0;
    so.inc_age();
    so.show_age();
    stu so2;
    //It should show and as 1 and not as zero//
    so2.show_age();

}