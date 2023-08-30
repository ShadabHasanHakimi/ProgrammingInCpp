#include<iostream>
using namespace std;
template <class t>
class swaap
{
    t a, b, temp;
    public:
        void swapp(t x, t y)
        {
            a = x;
            b = y;
            cout<<"The value of a and b before swap is : "<<a<<" | "<<b<<endl;
            temp = a;
            a = b;
            b = temp;
            cout<<"The value of a and b after swap is : "<<a<<" | "<<b<<endl;
        }
};
int main()
{
    swaap <float> m;
    m.swapp(3.4, 5.1);
    swaap <int> n;
    n.swapp(3, 4);
    swaap <char> o;
    o.swapp('c', 'd');
    swaap <string> p;
    p.swapp("shadab", "adab");
    return 0;
}