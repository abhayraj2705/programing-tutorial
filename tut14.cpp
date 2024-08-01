#include<iostream>
using namespace std;

struct employee
{
    int empid;
    int salary;
    char favchar;
};

union employees
{
    int  car;
    int house;
    int demo;
};




int main()
{
    enum meal{breakfast,lunch,soda};
    cout<<breakfast;
    //struct employee harry;
    //harry.empid=123;
    //harry.salary=1200000;
    //harry.favchar='c';

    //cout<<harry.empid<<endl;
    //cout<<harry.salary<<endl;
    //cout<<harry.favchar<<endl;

    //union employees abhay;
    //abhay.car=34;
    //cout<<abhay.car<<endl;


    return 0;
}