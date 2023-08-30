#include<iostream> //wap to find greatest among three numbers
using namespace std;
main()
{
    int a, b, c;
    cout<<"Enter three numbers:"<<endl;
    cin>>a>>b>>c;
    if(a>b)
    {
        if(a>c)
        cout<<""<<a<<" is the greatest number.";
        else
        cout<<""<<c<<" is the greatest number.";
    }
    else
    {
        if(b>c)
        cout<<""<<b<<" is the greatest number.";
        else
        cout<<""<<c<<" is the greatest number.";

    }
}