#include<iostream> //wap to find sum of ten user defined numbers
using namespace std;
main()
{
    int i, num, sum=0;
    cout<<"Enter ten numbers to find their sum."<<endl;
    for(i=0;i<10;i++)
    {
        cin>>num;
        sum = sum + num;
    }
    cout<<"Sum = "<<sum;
    return 0;
}