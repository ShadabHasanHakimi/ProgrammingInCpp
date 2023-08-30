// program to show constructor in inheritance
#include <iostream>
using namespace std;
class base1
{
    int d1;

public:
    base1(int i)
    {
        d1 = i;
        cout << "Base1 constructor called!!!" << endl;
    }
    void print1(){
        cout<<"d1 = "<<d1<<endl;
    }
};
class base2
{
    int d2;

public:
    base2(int j)
    {
        d2 = j;
        cout << "Base2 constructor called!!!" << endl;
    }
    void print2(){
        cout<<"d2 = "<<d2<<endl;
    }
};
// class derived : public base1, virtual public base2       // base2 then base1
class derived : public base1, public base2      // base1 then base2
{
    int d3, d4;
    public:
        derived(int a, int b, int c, int d) : base1(a), base2(b){
            d3 = c;
            d4 = d;
            cout<< "Derived constructor called!!!"<< endl;
        }
        void print3(){
        cout<<"d3 = "<<d3<<endl;
        cout<<"d4 = "<<d4<<endl;
    }
};
int main(){
    derived n(1, 2, 3, 4);
    n.print1();
    n.print2();
    n.print3();
    return 0;
}