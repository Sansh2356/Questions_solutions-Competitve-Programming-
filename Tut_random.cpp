#include<iostream>
#include<string>
using namespace std;
class stu{
    private:
    static void inc_age(){
        age++;
    }
    public:
    static int age;
    int marks;
    string name;
    stu(string s){
        cout<<"Hello i am your constructor"<<endl;
        this->name = s;
    }
    ~stu(){
        cout<<"Hello  i am you deconstructor"<<endl;
    }
};
int stu::age = 45;
int main(){
 stu so("Ansh");
 stu so2("Anurag");
 

}