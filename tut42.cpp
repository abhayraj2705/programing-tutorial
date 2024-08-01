#include<iostream>
using namespace std;

class simplecalculator
{
    protected:
    int a;
    int b;
    public:

    void set_operation(int ,int);
    void get_operation();
};

void simplecalculator::set_operation(int c,int d)
{
    a=c;
    b=d;
}

void simplecalculator::get_operation()
{
    cout<<"the addition  is performed as  "<<a+b<<endl;
    cout<<"the subtraction  is performed as  "<<a-b<<endl;
    cout<<"the division  is performed as  "<<a/b<<endl;
    cout<<"the multiplication  is performed as  "<<a*b<<endl;
}

class scientificcalculator
{
    protected:
    int a1;
    int a2;
    public:
    void set_operations(int , int);
    void get_operations();
};

void scientificcalculator::set_operations(int x,int y)
{
    a1=x;
    a2=y;
}

void scientificcalculator::get_operations()
{
     cout<<"the addition operation is performed as  "<<a1+a2<<endl;
    cout<<"the subtraction operation is performed as  "<<a1-a2<<endl;
    cout<<"the division operation is performed as  "<<a1/a2<<endl;

}

class hybridcalculator:public simplecalculator,public scientificcalculator
{
    public:
    void display()
    {
        cout<<"the result in hybrid calculator is show as ";
        get_operation();
        get_operations();

    }
};

int main()
{
    hybridcalculator c1;
    c1.set_operation(34,56);
    c1.set_operations(56,89);
    c1.display();
    return 0;
}