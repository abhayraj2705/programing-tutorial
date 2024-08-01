#include<iostream>
using namespace std;

template<class T1, class T2>

float avg(T1 a, T2 b)
{
    float  average=(a+b)/2;
    return average;
}

int main()
{
    float  a;
    a=avg(2.5,3);
    cout<<"the value of the given input of average is "<<a<<endl;
    return 0;
}