#include<iostream>
using namespace std;

class abhay
{
    int a;
    public:

    abhay& set_data(int a)
    {
        this->a=a;
        return*this;

    }

    void get_data()
    {
        cout<<"the value of a is "<<a<<endl;
    }
};

int main()
{
    abhay a;
    a.set_data(5);
    a.get_data();
    return 0;
}