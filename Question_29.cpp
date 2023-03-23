#include <iostream>
#define MACROS(a)(a>4);
using namespace std;
int main()
{
    enum student
    {
        married,
        unmarried,
        widowed
    };
    struct node
    {
        int age;
        char name;
        enum student st;
    };
    struct node n1;
    n1.age = 23;
    n1.name = 'a';
    n1.st = married;
    cout << n1.age << " " << n1.name << " " << n1.st << endl;

    enum student st1;
    enum student st2;
    st1 = married;
    cout << st1 << endl;
    typedef int SRT;
    SRT l = 4;
    cout << l << endl;
    if(MACROS(n1.age)>6){
        cout<<"d"<<endl;
    }
    /*
    Typedef-:Renaming of inbuilt datatypes as well as user defined datatypes
    Bitfields-:Whenever we require the storage of a variable like 2 which requires only 2 bits but to store it
    we often use int datatype as the storage type that leads to greater memory allocation as compared to
    required hence we can use bitfields in such cases to assign appropraiate bit size to a variable.
    syntax-:variable_name : size_required_to_be_assigned.
    */
}