//reading a file
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string s;
    ifstream in("sample_for_35&36.txt");
    // in>>s;      //will only read one word
    getline(in, s);     //will read one line
    cout<<s;
    return 0;
}