#include<iostream> //wap to find factorial of a number
using namespace std;
main()
{
    int i, num, fact=1;
    cout<<"Enter a number to find its factorial:"<<endl;
    cin>>num;
    for(i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    cout<<"Factorial of "<<num<<" = "<<fact;
    return 0;
}