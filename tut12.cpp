#include<iostream>
using namespace std;
int main()
{
    int a=40;
    int*b=&a;
    cout<<"the value of b  is"<<*b<<endl;

    // * dereferencing operators 
    cout<<"the value of a is "<<a<<endl;

    //& address of operator
    //use to show particularly address of operator

    cout<<"the value of number is "<<&a<<endl;

    //pointer to pointer

    int **c=&b;
    cout<<"the value of pointer to pointer is"<<**c<<endl;
    cout<<"the value of pointer to pointer is"<<c<<endl;
    cout<<"the value of pointer to pointeris "<<&b<<endl;
    cout<<"the value of pointer to pointer is"<<*c<<endl;
    return 0;

    //*c gives a address 
    //&b give adress of b
    //**c give value of a 
}