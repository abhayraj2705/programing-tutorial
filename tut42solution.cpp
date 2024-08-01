#include<iostream>
#include<cmath>
using namespace std;

class simplecalculator
{
    int a;
    int b;

    public:

    void get_data()
    {
        cout<<"enter the value of a "<<endl;
        cin>>a;
        cout<<"enter the value of b "<<endl;
        cin>>b;
    }

    void performdata()
    {
        cout<<"the value of a+b is: "<<a+b<<endl;
        cout<<"the value of a-b is: "<<a-b<<endl;
        cout<<"the value of a*b is: "<<a*b<<endl;
        cout<<"the value of a/b is: "<<a/b<<endl;
    }
};

class scientificcalculator
{
    int a;
    int b;

    public:

    void get_data()
    {
        cout<<"enter the value of a "<<endl;
        cin>>a;
        cout<<"enter the value of b "<<endl;
        cin>>b;
    }

    void performdata()
    {
        cout<<"the value of cos(a) is: "<<cos(a)<<endl;
        cout<<"the value of sin(a) is: "<<sin(a)<<endl;
        cout<<"the value of tan(a) is: "<<tan(a)<<endl;
        

    }
};

class hybridcalculator:public simplecalculator,public scientificcalculator
{
    public:

    void display()
    {
        cout<<"the disolay if hybrid calculator is : "<<endl;
        simplecalculator::get_data();
        simplecalculator::performdata();
        scientificcalculator::get_data();
        scientificcalculator::performdata();
    }

};

int main()
{
    hybridcalculator h1;
    h1.display();

    return 0;
}