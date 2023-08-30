#include<iostream> //half pyramid of numbers
using namespace std;
main()
{
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<=i;j++)
        {
            cout<<" "<<j;
        }
        cout<<"\n";
    }
    return 0;
}