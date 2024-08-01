#include<iostream>
using namespace std;
template<class T1, class T2>

float sub(T1 a, T2 b)
{
    float subtraction=(a-b);
    return subtraction;
}

template<class T1 , class T2>
float addition(T1 a, T2 b)
{
    float add=(a+b);
    return add;
}



int main()
{
    float c;
    c=sub(45.4,23);
    cout<<"the final call of subtraction is "<<c<<endl;
    float d;
    d=addition(23.8,45);
    cout<<"the final value of the addition is "<<d<<endl;
    return 0;
}