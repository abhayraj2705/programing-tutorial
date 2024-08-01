#include<iostream>
using namespace std;

class abhay
{
    int a;
    int b;

    public:

    void set_data(int i ,int j)
    {
        a=i;
        b=j;
    }

    void get_data()
    {
        cout<<"the value of a is "<<a<<endl;
        cout<<"the value of b is "<<b<<endl;
    }

};

int main()
{
    int size=4;
    abhay ab;
    int e,f;
    int i;

    abhay*ptr=new abhay[size];
    abhay*ptrtemp=ptr;
    for ( i = 0; i < size; i++)
    {
        cout<<"enter the value of a and b respectively"<<endl;
        cin>>e>>f;
        ptr->set_data(e,f);
        ptr++;
    }

    for ( i = 0; i < size; i++)
    {
        ptrtemp->get_data();
        ptrtemp++;
    }
    
    
    return 0;
}