#include<iostream>
using namespace std;

class complex
{
    int a;
    int b;

    public:

    complex(void){}
    complex(int n1, int n2);
    complex(complex x,complex y);

    void println();
};

complex::complex(int n1,int n2)
{
    a=n1;
    b=n2;
}

complex::complex(complex x, complex y)
{
    int real;
    real=(x.a+y.a);
    cout<<real;
}

void complex:: println()
{
    cout<<"the no in complex form is "<<a<<"+"<<b<<"i"<<endl;

}

int main()
{
    complex c1(2,3);
    c1.println();

    complex c2(4,3);
    c2.println();

    return 0;
}

//hence we make a succesfull constructor 