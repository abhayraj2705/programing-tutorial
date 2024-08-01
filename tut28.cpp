#include<iostream>
using namespace std;
class y;

class x
{
    int value;

    friend void addsum(x,y);

    public:

    void setdata(int data)
    {
        value=data;

    }

};

class y
{
    int value1;
    friend void addsum(x,y);

    public:

    void setdata(int data)
    {
        value1=data;
    }
};

void addsum(x o1, y o2)
{
    cout<<"the sum of thier objects is "<<o1.value+o2.value1;
}

int main()
{
    x x1;
    x1.setdata(34);

    y y1;
    y1.setdata(45);

    addsum(x1,y1);
    
    return 0;
}