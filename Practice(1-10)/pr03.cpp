#include<iostream> //wap to find total and percentage of five subjects
using namespace std;
main()
{
    float math,sci,eng,hin,sst,tot,per;
    cout<<"Enter your marks obtained in maths , science, english , hindi , sst respectively"<<endl;
    cin>>math>>sci>>eng>>hin>>sst;
    tot=math+sci+eng+hin+sst;
    per=tot/5;
    cout<<"Your total marks is "<<tot<<endl<<"Your percentage obtained is "<<per<<endl;
    if(per>=90)
        cout<<"You have obtained A grade";
    else if(per>=80 && per<90)
        cout<<"You have obtained B grade";
    else if(per>=60 && per<80)
        cout<<"You have obtained C grade";
    else if(per>=33 && per<60)
        cout<<"You have obtained D grade";
    else
        cout<<"You have obtained F grade";
    return 0;
}