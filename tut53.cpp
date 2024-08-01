#include<iostream>
using namespace std;

class abhay
{
    int a;
    public:

    void setdata(int a)
    {
        this->a=a;
    }

    void get_data()
    {
        cout<<"the value of a is "<<a<<endl;
    }
};

int main()
{
    abhay ab;
    ab.setdata(4);
    ab.get_data();
    return 0;
}