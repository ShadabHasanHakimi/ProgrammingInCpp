//templates
#include<iostream>
using namespace std;
template<class t1, class t2>
class mul
{
    private:
        t1 a;
        t2 b;
    public:
        void setdata(t1 a, t2 b)
        {
            this-> a = a;       //this pointer points the class members
            this-> b = b;
        }
        void getdata()
        {
            cout<<a*b<<endl;
        }
};
int main()
{
    mul <int , float> n;
    n.setdata(7, 8.1);
    n.getdata();
    return 0;
}