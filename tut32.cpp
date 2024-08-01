#include <iostream>
using namespace std;

class simple
{
    int data1;
    int data2;
    int data3;

public:

    simple(int a, int b = 6, int c = 8)
    {
        data1 = a;
        data2 = b;
        data3 = c;
    }

    void show();

};

void simple :: show()
{
    cout<<"your data is "<<data1<<","<<data2<<" and "<<data3<<endl;
}

int main()
{
    simple bd1(1);
    bd1.show();

    simple bd2(1,2,3);
    bd2.show();
    
    simple bd3(1,3);
    bd3.show();
    return 0;
}