#include<iostream>
using namespace std;

class employee
{
    int empid;
    static  int salary;
    public:

    void setdata()
    { 
       
        cout<<"enter the employee id :"<<endl;
        cin>>empid;
    }

    void getdata()
    {
        cout<<"the id of employee is "<<empid<<endl;
    }

};

int employee::salary=10000;


int main()
{
    //employee harry;
    //harry.setdata();
    //harry.getdata();
    employee fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[i].setdata();
        fb[i].getdata();
    }
    
    return 0;
}