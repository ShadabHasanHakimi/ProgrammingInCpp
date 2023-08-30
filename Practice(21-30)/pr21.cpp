#define max 100 //sum of user defined numbers
#include<iostream>
using namespace std;
int main()
{
    int num[max];
    int i,n,sum;
    cout<<"How many numbers do you want to add : "<<endl;
    cin>>n;
    cout<<"You want to add "<<n<<" numbers."<<endl<<"Enter numbers for addition."<<endl;
    for(i=0;i<n;i++)
    {
        cin>>num[i];
        sum=sum+num[i];
    }
    cout<<"Sum : "<<sum;
    return 0;
}