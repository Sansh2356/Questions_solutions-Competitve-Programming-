#include <iostream>
using namespace std;
// Heiererichal inheritance with mom and two sons that is single parent and multiple childs//
class mom
{
private:
    string name_mom;
    int age;

public:
    string quality_mom;
};
class son : public mom
{
private:
    string name;

public:
    int age_son;
};
class son2 : public mom
{
private:
    string name;
    int age_son2;
};
// single-level inheritence a base class and a derived class//
class base1
{
private:
    int a;

protected:
    int c;

public:
    int k;
};
class derived1 : public base1
{
public:
    int j;
};
// Multiple inheritence that is multiple parents inheriting values to a single child//
class base2
{
private:
    void print_name()
    {
        cout << name << endl;
    }

public:
    string name;
    string colour;
};
class base3
{
private:
    void print_name2()
    {
        cout << name2 << endl;
    }

public:
    string name2;
};
class derived2 : public base2, base3
{
public:
    int age;
};
// hybrid inheritance which is a mixture of multiple types of inheritences herirechial and multilevel inheritencese//
class base4
{
public:
    int s;
};
class sub_base1 : public base4
{
public:
    int g;
};
class sub_base2 : public base4
{
public:
    int f;
};
class derived_sub_base2 : public sub_base2
{
};
int main()
{

}