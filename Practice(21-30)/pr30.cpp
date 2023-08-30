#include<iostream>
using namespace std;
class student
{
    protected:
        int id; 
        int roll_number;
    public:
        void set_details(int, int);
        void get_details();
};

void student :: set_details(int i, int r)
{
    id = i;
    roll_number = r;
}

void student :: get_details()
{
    cout<<"ID : "<<id<<endl;
    cout<<"Roll number : "<<roll_number<<endl;
}

class marks : public student
{
    protected:
        int maths, physics;
    public:
        void set_marks(int, int);
        void display();
};

void marks :: set_marks(int m, int p)
{
    maths = m;
    physics = p;
}

void marks :: display()
{
    cout<<"Marks obtained in maths : "<<maths<<endl;
    cout<<"Marks obtained in physics : "<<physics<<endl;
}

class percentage : public marks
{
    public:
        void score();
};

void percentage :: score()
{
        int per;
        per = (maths + physics)/2;
        cout<<"Percentage : "<<per<<endl;
}

int main()
{
    percentage a;
    a.set_details(786, 36);
    a.get_details();
    a.set_marks(99, 97);
    a.display();
    a.score();
    return 0;
}