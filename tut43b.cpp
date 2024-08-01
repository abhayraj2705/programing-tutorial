#include<iostream>
using namespace std;

class base1
{
    public:
    void say()
    {
        cout<<"how are you "<<endl;
    }
};

class base2:public base1
{
    public:
    void say()
    {
        cout<<"what is your fathers name in your birth cirtificate "<<endl;
    }
};


int main()
{
    base2 c1;
    c1.say();
    return 0;
}