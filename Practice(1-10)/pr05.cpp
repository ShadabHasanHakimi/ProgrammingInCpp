#include<iostream> //wap to find average of three numbers
using namespace std;
main()
{
    float a, b, c, avg;
    cout<<"Enter three numbers to find their average:"<<endl;
    cin>>a>>b>>c;
    avg=(a+b+c)/3;
    cout<<"Average = "<<avg;
    return 0;
}