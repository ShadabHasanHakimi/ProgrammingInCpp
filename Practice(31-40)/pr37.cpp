#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
        // //for input in file and output in program
    // ofstream a;
    // string s1;
    // a.open("sample_for_37.txt");
    // cout<<"Enter your name :";
    // cin>>s1;
    // a<<s1;
    // a.close();

        // //for output in file and input in program
    // ifstream b;
    // string s2;
    // b.open("sample_for_37.txt");
    // b>>s2;
    // cout<<s2;
    // b.close();

        //for output the whole file and input whole file in program 
    ifstream c;
    string s3;
    c.open("sample_for_37.txt");
    while(c.eof() == 0)
    {
        getline(c, s3);
        cout<<s3<<endl;
    }
    return 0;
}