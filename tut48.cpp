#include<iostream>
using namespace std;

class base1
{
    int data1;
    public:
    base1(int e)
    {
        data1=e;
        cout<<"the base 1 contructor is called "<<endl;
    }
    
    void get_data1()
    {
        cout<<"the value of data 1 is: "<<data1<<endl;
    }


};

class base2
{
    int data2;
    public:
    base2(int e)
    {
        data2=e;
        cout<<"the base 2 constructor is called "<<endl;
    }
    
    void get_data2()
    {
        cout<<"the value of data 1 is: "<<data2<<endl;
    }


};

class derived:public base2, public base1 
{
    int derived1,derived2;
    public:
    derived(int a, int b, int c, int d):base1(a),base2(b)
    {
        derived1=c;
        derived2=d;
        cout<<"hence the derived class is called "<<endl;
    }

    void get_derived()
    {
        cout<<"the value of derived1 is given by: "<<derived1<<endl;
        cout<<"the value of derived2 is given by: "<<derived2<<endl;
    }
    
};
int main()
{
    derived abhay(1,2,3,4);
    abhay.get_data1();
    abhay.get_data2();
    abhay.get_derived();
    return 0;
}