#include<iostream>
using namespace std;
int c=45;
int main()
{
   // int a,b,c;
   // cout<<"enter the value of a"<<endl;
   // cin>>a;
   // cout<<"enter the value of b"<<endl;
   // cin>>b;
   // c=a+b;
   // cout<<"the a and is :"<<c<<endl;
   // cout<<"the value of c is"<<::c<<endl;
    //return 0;
    //::it is scope variable 

    //typecasting

    float a=34.4f;
    long e=34.4;
    cout<<"the value of a is:"<<(int )a;
    cout<<"the value of b us :"<<(float)e;
    cout<<"the value of 34.4 is "<<sizeof(34.4f)<<endl;
    cout<<"the value of 34.4 is "<<sizeof(34.4L)<<endl;
    cout<<"the value of 34.4 is "<<sizeof(34.4l)<<endl;
    cout<<"the value of 34.4 is "<<sizeof(34.4)<<endl;
    return 0;


    //refrence variable 

    //int a=54;
    //int  & y= a;
    //cout<<"the value of a is :"<<a<<endl<<"the value of y is "<<y<<endl;
    //return 0;

}