#include<iostream>
using namespace std;

class base
{
    int data1;
    public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};

void base::setdata(void)
{
    data1=10;
    data2=10;
}

int base::getdata1()
{
    return data1;
}

int base::getdata2()
{
    return data2;
}

class derive : private base
{
    int data3;
    public:
    void process();
    void display();
};

void derive::process()
{
    setdata();
    data3=data2*getdata1();
}

void derive::display()
{
    cout<<"the value of data1 is"<<getdata1()<<endl;
    cout<<"the value of data2 is"<<data2<<endl;
    cout<<"the value of data3 is "<<data3<<endl;
}
int main()
{
    derive c1;
  
    c1.process();
    c1.display();
    return 0;
}