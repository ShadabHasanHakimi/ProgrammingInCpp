#include<iostream> //wap to perform different mathematical operations on two numbers
using namespace std;
main()
{
    int a,b,x,y,z,n,m;
    cout<<"Enter two numbers to perform diffrent mathematical operations on them"<<endl;
    cin>>a>>b;
    x=a+b;
    y=a-b;
    z=a*b;
    m=a/b;
    n=a%b;
    cout<<"Addition = "<<x<<endl<<"subtraction = "<<y<<endl<<"Multiplication = "<<z<<endl;
    cout<<"Division = "<<m<<endl<<"Modulus = "<<n<<endl;
    return 0;
}
