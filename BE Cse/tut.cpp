#include<iostream>
using namespace std;
class parent{
    public:
    parent(int x){
        cout<<"I am the paramatrized constructor of the parent class"<<endl;
    }
    ~parent(){
         cout<<"The de of the parent class"<<endl;
    }
};
class child:public virtual parent{
    public:
    int age;
    child(int k,int f):parent(k)
    {
        cout<<"This is the non paramtrized constructor of the child class"<<endl;
        this->age = f;
    }
    ~child(){
        cout<<"The de of the child class"<<endl;
    }
};
int main(){
    child co(151515,27347325);

}