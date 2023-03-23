#include<iostream>
#include<string>
using namespace std;
class student
{
    private:
    int house_no;
public:
    int age;
    string name;
    void name_assign()
    {
        cout << name << endl;
    }
    void name_assign2();
    void set_age(int a){
        age = a;
    }
    void get_age();
    void get_set_add(int a){

    }
};
 void student::name_assign2(){
    cout<<name<<endl;
 }
 void student::get_age(){
    
    cout<<"the age is ::"<<age<<endl;
 }

int main()
{
    student so;
    cout<<"Enter your name"<<" "<<"accesing by the function inside the class by object"<<endl;
    cin>>so.name;
     so.name_assign();
    cout<<"accessing name by scope resolution outside the class"<<endl;
    so.name_assign2();
    int c;
    cout<<"enter age"<<endl;
    cin>>c;
    so.set_age(c);
    so.get_age(); 
}