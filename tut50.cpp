#include<iostream>
using namespace std;

int main()
{
    int a=4;
    int*ptr=&a;

    cout<<"the value of a is "<<*(ptr)<<endl;

    int*p= new int(40);
    cout<<"the value of address of p is "<<*(p)<<endl;

    //float *arr=new float(56.07);
   // cout<<"the value of  address of arr is"<<*(arr)<<endl;

    int *arr=new int[3];
    arr[0]=45;
    *(arr+1)=34;
    arr[2]=43;

    delete[] arr;

    cout<<"the value of arr[0] is "<<arr[0]<<endl;
    cout<<"the value of arr[1] is "<<arr[1]<<endl;
    cout<<"the value of arr[2] is "<<arr[2]<<endl;

    return 0;
}