#include<iostream> //program to find sum of first row of a matrix
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
    for(j=0;j<3;j++)
    {
        sum=a[0][j]+b[0][j]; //put i=1 for second row and i=2 for third row
        cout<<sum<<"\t";
    }
    return 0;
}