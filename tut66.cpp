#include<iostream>
using namespace std;

template<class T1=float,class T2=int,class T3=char>
class abhay
{
    public:
    T1 a;
    T2 b;
    T2 c;

    abhay(T1 x, T2 y,T3 z)
    {
        a=x;
        b=y;
        c=z;
    }
    
    void display()
    {
        cout<<"the value of a is "<<a<<endl;
        cout<<"the value of b is "<<b<<endl;
        cout<<"the value of c is "<<c<<endl;
    }
    
};

int main()
{
    abhay<>ab(6.4,3,'c');
    ab.display();

    abhay<float,string,string>a(3.4,"abhayraj","av");
    a.display();

    return 0;
}