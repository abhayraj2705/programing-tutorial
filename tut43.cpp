#include<iostream>
using namespace std;

class base1
{
    public:

    void greet()
    {
        cout<<"how are you "<<endl;
    }

};

class base2
{
    public:
    void greet()
    {
        cout<<"who are you "<<endl;
    }

};

class derive:public base1,public base2
{
    int a;
    public:
    void greet()
    {
        base1::greet();
    }
};

int main()
{
    base1 harry;
    base2 ab;
    harry.greet();
    ab.greet();

    derive ac;
    ac.greet();
    return 0;
}