#include<iostream> //program to convert decimal into binary
using namespace std;
int main()
{
    int dec, binary[50], i=0, r;
    cout<<"Enter a decimal number to convert it into binary :"<<endl;
    cin>>dec;
    while(dec>=1)
    {
        r=dec%2;
        binary[i]=r;
        dec=dec/2;
        i++;
    }
    for(r=i-1;r>=0;r--)
    {
        cout<<binary[r];
    }
    return 0;
}