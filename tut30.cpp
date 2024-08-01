#include<iostream>
using namespace std;

class complex
{
    public:
    int a;
    int b;
    complex(int x,int y);

    void println()
    {
        cout<<"the complex no is "<<a<<" +i "<<b<<endl;
    }

};

complex::complex(int x,int y)
{
    a=x;
    b=y;
}


int main()
{
    complex a(1,2);
    a.println();

    complex b=complex (3,5);
    b.println();

    return 0;
}