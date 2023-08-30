//writing in a file
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string s = "Shadab Hasan Hakimi";
    ofstream out("sample_for_35&36.txt");
    out<<s;
    return 0;
}