#include<iostream>
using namespace std;
int factorial(int number)
{
    if(number==0 || number==1)
    {
       return 1;
    }

    else{

        return number*factorial(number-1);
    }
}

int main()
{
    int n;
    cout<<"enter the number you wnat"<<endl;
    cin>>n;
    cout<<"the result of factorial is : "<<factorial(n)<<endl;

    return 0;
}