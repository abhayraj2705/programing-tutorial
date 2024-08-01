#include<iostream>
using namespace std;

template<class T,class T1>

float aver(T a, T1 b)
{
    float avg=(a+b)/2.0;
    return avg;
}

int main()
{
    float a;
    a=aver(3,4.5);
    cout<<"the avg value is "<<a<<endl;
    return 0;
}