#include<iostream>
using namespace std;

class base1
{
    public:

    int ab=1;
    virtual void  display()
    {
        cout<<"the value  of ab is "<<ab<<endl;
    }
};

class derived1:public base1
{
    public:

    int ab1=5;

    void display()
    {
        cout<<"the value of ab1 is "<<ab1<<endl;
        cout<<"the value of ab is "<<ab<<endl;
    }

};

int main()
{
    base1 a;
    derived1 b;
    base1*s;
    s=&b;
    s->display();
    return 0;
}