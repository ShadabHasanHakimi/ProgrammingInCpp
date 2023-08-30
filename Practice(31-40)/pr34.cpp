//abstract class, virtual function, pure virtual function
#include<iostream>
using namespace std;
class operations // abstract class : a class only made to be derived in another classes
{
    protected:
        int a, b;
    public:
        // virtual void display(){} --> virtual function, not necessary to make another function named display in derived class
        virtual void display() = 0; // pure virtual function, necessary to make another function named display in derived class
};
class add : public operations
{
    private:
        int sum;
    public:
        add(int x, int y){
            a = x;
            b = y;
            sum = a + b;
        }
        void display(){
            cout<<sum<<endl;
        }
};
int main()
{
    add i(3, 4);
    operations *j;
    j= &i;
    j->display();
    return 0;
}