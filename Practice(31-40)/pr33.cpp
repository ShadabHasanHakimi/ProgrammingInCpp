// program for pointer of arrays
#include<iostream>
using namespace std;
class mall
{
    protected:
        int id, price;
    public:
        void setdetails(){
            int i;
            int p;
            cout<<"Enter the id and price of the product :"<<endl;
            cin>>i>>p;
            id = i;
            price = p;
        }
        void display(){
            cout<<"Id of the product : "<<id<<endl;
            cout<<"Price of the product : "<<price<<endl;
        }
};
int main()
{
    int size, i;
    cout<<"How many products do you want to enter :"<<endl;
    cin>>size;
    mall *ptr = new mall[size];
    for(i=0; i<size; i++)
    {
        ptr -> setdetails();
        ptr++;
    }
    ptr=0;
    for(i=0; i<size; i++)
    {
        ptr -> display();
        ptr++;
    }
}