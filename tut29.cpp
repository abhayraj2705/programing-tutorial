#include<iostream>
using namespace std;

class complex
{
    public:
    int a;
    int b;

    complex (void ); //declaration of constructor

    void println()
    {
        cout<<"the form of complex no is "<<a<<" + "<<b<<"i"<<endl;
    }
};

complex::complex(void)
{
    a=10;
    b=0;
}
int main()
{ 
    complex c;
    c.println();


    return 0;
}