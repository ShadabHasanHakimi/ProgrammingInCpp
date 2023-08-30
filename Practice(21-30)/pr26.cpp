#include <iostream> //program to enter and show details of an employee using class
using namespace std;
class employee
{
    int id;

public:
    string name;
    int salary;
    void setdetails();
    void getdetails();
};
int main()
{
    employee emp;
    emp.setdetails();
    emp.getdetails();
    return 0;
}
void employee ::setdetails()
{
    cout << "Enter your id" << endl;
    cin >> id;
    cout << "Enter your name" << endl;
    cin >> name;
    cout << "Enter your salary" << endl;
    cin >> salary;
}
void employee ::getdetails()
{
    cout << "Id : " << id << endl;
    cout << "Name : " << name << endl;
    cout << "Salary : " << salary << endl;
}