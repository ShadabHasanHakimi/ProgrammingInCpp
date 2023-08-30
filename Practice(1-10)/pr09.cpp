#include<iostream>//wap to check whether a number is even or odd
using namespace std;
main()
{
    int a;
    cout<<"Enter a number:"<<endl;
    cin>>a;
    if(a%2==0)
    cout<<""<<a<<" is even.";
    else
    cout<<""<<a<<" is odd.";
    return 0;
}