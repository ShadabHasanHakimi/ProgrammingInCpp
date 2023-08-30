#include<iostream> //wap to find table of a number
using namespace std;
main()
{
    int i, a, mul=1;
    cout<<"Enter a number to find its table"<<endl;
    cin>>a;
    for(i=1;i<11;i++)
    {
        mul=a*i;
        cout<<""<<a<<" * "<<i<<" = "<<mul<<endl;
    }
    return 0;
}