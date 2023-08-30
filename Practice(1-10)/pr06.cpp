#include<iostream> //wap to find area of a triangle
using namespace std;
main()
{
    float b, h, area;
    cout<<"Enter the base and height of triangle: "<<endl;
    cin>>b>>h;
    area= (b*h)*0.5;
    cout<<"Area = "<<area;
    return 0;
}