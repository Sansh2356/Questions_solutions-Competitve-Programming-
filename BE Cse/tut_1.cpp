#include <iostream>
using namespace std;
class a
{
private:
    int b;

protected:
    int c;

public:
    int num;
    friend void swap(a object1);
    void get(int f)
    {
        this->c = 4;
    }
};
class d : public a
{
};
void swap(a object1)
{
    object1.num = 45;
    cout << object1.num << endl;
}
int main()
{
    a object1;
    swap(object1);
    d dobject;

    /*
    inline functions
    default argumentas and actual arguments
    Constant arguments
    Static memeber functions and data memebers
    friend functions
    copy constructor
    implicit and explicit type casting
    constructors in derived class
    abstract class
    virtual base class
    ambiguity resolution



    */
}