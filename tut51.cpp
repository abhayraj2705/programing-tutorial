#include<iostream>
using namespace std;

class ab
{
    int a;
    int b;

    public:

    void setdata(int c,int d)
    {
        a=c;
        b=d;
    }
    void get_data()
    {
        cout<<"the real part is "<<a<<endl;
        cout<<"the imaginary part is "<<b<<endl;
    }
};

int main()
{
    ab c1;
    //ab *ptr=&c1;
    ab*ptr=new ab[4];
    //c1.setdata(34,56);
    //c1.get_data();

   // (*ptr).setdata(34,56);
   // (*ptr).get_data();

   ptr->setdata(56,79);
   
   ptr->get_data();
    return 0;
}

