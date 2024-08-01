#include<iostream>
using namespace std;
class employee
{
    private:
    int a,b,c;

    public:
    int d;
    int e;

    void setdata(int a1,int b1,int c1);

    void getch()
    {
        cout<<"the value of a is "<<a<<endl;
        cout<<"the value of b is "<<b<<endl;
        cout<<"the value of c is "<<c<<endl;
        cout<<"the value of d is "<<d<<endl;
        cout<<"the value of e is "<<e<<endl;
    }
};

void employee :: setdata(int a1 , int b1 ,int c1)
{
    a=a1;
    b=b1;
    c=c1;

}

int main()
{
    employee harry;
    harry.d=23;
    harry.e=34;
    harry.setdata(1,2,3);
    harry.getch();

    return 0;
}