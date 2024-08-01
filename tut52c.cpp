#include<iostream>
using namespace std;

class shopitem
{
    int itemmid;
    int itemprice;

    public:

    void set_data(int a, int b)
    {
        itemmid=a;
        itemprice=b;
    }

    void get_data()
    {
        cout<<"the value of itemid is "<<itemmid<<endl;
        cout<<"the value of itemprice price is "<<itemprice<<endl;
    }

};

int main()
{
    shopitem ab;
    int size=4;
    shopitem*ptr=new shopitem[size];
    shopitem*ptrtemp=ptr;
    int i;
    int p,q;
    for ( i = 0; i < size; i++)
    {
        cout<<"enter the value of p and q"<<i+1<<endl;
        cin>>p>>q;
        ptr->set_data( p, q);
        ptr++;
    }
    for ( i = 0; i < size; i++)
    {
        cout<<"the values can described as "<<endl;
        ptrtemp->get_data();
        ptrtemp++;
    }
    
    
    return 0;
}