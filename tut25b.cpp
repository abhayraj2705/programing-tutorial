#include<iostream>
using namespace std;

class complex
{
    int a;
    int b;
    public:

    void setdata(int v1,int v2)
    {
        a=v1;
        b=v2;
    }
        

    void getdata(complex c1,complex c2)
    {
        a=c1.a+c2.a;
        b=c1.b+c2.a;
    }

    void print()
    {
        cout<<"the value of complex no is "<<a<<"+i"<<b<<endl;
    }


};
int main()
{  
    complex a,b,c;
    a.setdata(1,3);
    a.print();
    b.setdata(2,4);
    b.print();
    c.getdata(a,b);
    c.print();

    return 0;
}