#include<iostream> //half pyramid of stars
using namespace std;
main()
{
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<=i;j++)
        cout<<" *";
        cout<<"\n";
    }
    return 0;
}