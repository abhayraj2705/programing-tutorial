#include<iostream>
using namespace std;
//swaping values by using pointers 
int swap(int*a,int*b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

//swaping values by using address 


int& swapreference(int &a,int &b)
{
    int ab=a;
    a=b;
    b=ab;
    return a;
}


int main()
{
    int num1,num2;
    int x=2;
    int y=4;
    cout<<"enter the num1"<<endl;
    cin>>num1;
    cout<<"enter the num2"<<endl;
    cin>>num2;

    swap(&num1,&num2);
    cout<<"the value of num1 is"<<num1<<endl<<"the value of num2 is"<<num2<<endl;
    swapreference(x,y);
    cout<<"the new swap value of x is :"<<x<<endl<<"the new swap vlue of y is "<<y<<endl;
    swapreference(x,y)=45;
    cout<<"the new swap value of x is:"<<x<<endl<<"the new swap value of y is"<<y<<endl;


    return 0;

}