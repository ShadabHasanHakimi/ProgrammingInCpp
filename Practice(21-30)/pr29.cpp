#include<iostream>
using namespace std;
class base
{
    private:
        int data1;
    public:
        int data2;
        base(){
            data1 = 10;
            data2 = 20;
        }
        int getdata1();
        int getdata2();
};
class derived : public base
{
    public:
        int data3;
        void process();
        void display();
};
int base :: getdata1()
{
    return data1;
}
int base :: getdata2()
{
    return data2;
}
void derived :: process()
{
    data3 = getdata1() * data2;
}
void derived :: display()
{
    cout<<"data1 using function : "<<getdata1()<<endl;
    cout<<"data2 using function : "<<getdata2()<<endl;
    cout<<"data2 directly : "<<data2<<endl;
    cout<<"data3 directly : "<<data3;
}
int main()
{
    derived a;
    a.process();
    a.display();
    return 0;
}