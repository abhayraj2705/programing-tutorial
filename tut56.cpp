#include<iostream>
using namespace std;

class base1
{
    public:

    int var1=2;
    virtual void get_display()
    {
        cout<<"the value of var1 is "<<var1<<endl;
    }
};

class derived1:public base1
{
    public:
    int var2=4;
    void get_display()
    {
        cout<<"the value of var2 is "<<var2<<endl;
        cout<<"the value of var1  is "<<var1<<endl;
    }

};

int main()
{
    base1 b;
    derived1 d;
    base1*ab;
    ab=&d;
    ab->get_display();

    return 0;
}