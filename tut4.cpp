#include<iostream>
using namespace std;
int glob=6;//global variable 
void sum()
{

    cout<<glob;
}
int main()
{
    int a=4;
    int b=5;
    int glob=54;
    sum();
    cout<<"the value of a is"<<a<<"the value of b is"<<b;
    cout<<glob;
    return 0;
}