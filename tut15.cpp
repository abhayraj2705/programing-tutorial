#include<iostream>
using namespace std;
int sum(int a,int b);

int main()
{
    int num1,num2;
    cout<<"enter num1 is"<<endl;
    cin>>num1;
    cout<<"enter the num2 is"<<endl;
    cin>>num2;
    cout<<"the additiom is :"<<sum(num1,num2)<<endl;

    return 0;
}

int sum(int a,int b)
{
    int c=a+b;
    return c;
}


//function prototype bolenege isko 