#include<iostream>
using namespace std;

class abhay
{
    int a;
    int b;

    public:

    void set_data(int i, int j)
    {
        a=i;
        b=j;
    }

    void get_data()
    {
        cout<<"the value of a is "<<a<<endl;
        cout<<"thr value of b is "<<b<<endl;
    }

};

int main()
{
    abhay ab;
    int size=7;
    abhay*ptr=new abhay[size];
    abhay *ptrtemp=ptr;
    int i;
    int p,q;
    for (int i = 0; i < size; i++)
    {
        cout<<"enter the value of p and q respectively "<<i+1<<endl;
        cin>>p>>q;
        ptr->set_data(p,q);
        ptr++;
       
    }

    for ( i = 0; i < size; i++)
    {
        cout<<"the value can be described as "<<i+1<<endl;

        ptrtemp->get_data();
        ptrtemp++;
       
    }
    
    

    return 0;
}