#include<iostream> //program to find sum of first column of a matrix
using namespace std;
int main()
{
    int a[3][3], b[3][3], i, j, sum=0;
    cout<<"Enter the values of first matrix"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    cout<<"Enter the values of second matrix"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        sum=a[i][0]+b[i][0]; //put j=1 for second column and j=2 for third column
        cout<<sum<<endl;
    }
    return 0;
}