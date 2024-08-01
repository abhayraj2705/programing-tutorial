#include<iostream>
using namespace std;

class y;

class x
{
    int value;

    public:

    void setdata(int data)
    {
        value=data;
    }

    void getdata()
    {
        cout<<value;
    }

    friend void swapping(x &c1,y &c2);

};

class y
{
    int value1;

    public:

    void setdata(int data1)
    {
        value1=data1;
    }

    void getdata()
    {
        cout<<value1;
    }

    friend void swapping(x &c1,y &c2);

};

void swapping( x &c1,y &c2 )
{
    int temp= c1.value;
    c1.value=c2.value1;
    c2.value1=temp;
}

int main()
{
    x x1;
    x1.setdata(34);
    y y1;
    y1.setdata(45);

    swapping(x1,y1);
    cout<<"the swapped value is the ";
    x1.getdata();
    cout<<"the swapped value is the ";
    y1.getdata();
    return 0;
}