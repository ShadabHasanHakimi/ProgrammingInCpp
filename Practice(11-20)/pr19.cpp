#include<iostream> //full diamond of stars
using namespace std;
main()
{
    int i,j,k;
    for(i=0;i<5;i++)
    {
        for(j=5;j>i;j--)
        {
            cout<<" ";
        }
        for(k=0;k<i;k++)
        {
            cout<<" *";
        }
        cout<<"\n";
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<i;j++)
        {
            cout<<" ";
        }
        for(k=5;k>i;k--)
        {
            cout<<" *";
        }
        cout<<"\n";
    }
    return 0;
}