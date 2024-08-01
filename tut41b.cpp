#include<iostream>
using namespace std;

class base1
{
    protected:
    int baseint1;
    public:
    void set_baseint1(int b)
    {
        baseint1=b;
    }


};

class base2
{
    protected:
    int baseint2;
    public:
    void set_baseint2(int c)
    {
        baseint2=c;
    }

};

class derive : public base1,public base2
{
    public:
    void display()
    {
        cout<<"the base1 value is"<<baseint1<<endl;
        cout<<"the base2 value is"<<baseint2<<endl;
        cout<<"the sum of integer is "<<(baseint1+baseint2)<<endl;
    }
};
int main()
{
    derive c1;
    c1.set_baseint1(23);
    c1.set_baseint2(25);
    c1.display();
    return 0;
}