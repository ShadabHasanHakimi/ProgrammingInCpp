// runtime polymorphism
#include <iostream>
using namespace std;
class base
{
public:
    int var_base;
    void display()
    {
        cout << "The value of var_base is " << var_base << endl;
    }
};
class derived : public base
{
public:
    int var_derived;
    void display()
    {
        cout << "The value of var_derived is " << var_derived << endl;
    }
};
int main()
{
    base obj_base;
    derived obj_derived;
    base *base_pointer;
    base_pointer = &obj_derived;
    derived *derived_pointer;
    // derived_pointer = &obj_derived;
    base_pointer->var_base = 34;
    base_pointer->display();
    derived_pointer->var_derived = 56;
    derived_pointer->display();
    return 0;
}