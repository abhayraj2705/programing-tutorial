#include<iostream>
using namespace std;

class base
{
    public:

    int var1;

    void display()
    {
        cout<<"the value of var1 is given as "<<var1<<endl;

    }

    
};

class derived : public base
{
    public:

    int var2;
    void dispay()
    {

     cout<<"thr value of var2 is given as per"<<var2<<endl;
    }


};

int main()
{
    base*abhay;
    base ab;
    derived d;

    abhay =&d;
    abhay->var1=34;
    abhay->display();
    abhay->var1=76;
    abhay->display();

    derived*as;
    as=&d;
    as->var2=23;
    as->dispay();
    as->var1=12;
    as->display();
    return 0;
}