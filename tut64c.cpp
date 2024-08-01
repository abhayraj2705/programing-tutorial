#include<iostream>
using namespace std;

class abhay
{
    public:

    int*arr;
    int size;

    abhay(int m)
    {
        size=m;
        arr=new int[size];

    }

    int addition(abhay &a)
    {
        int c=0;
        for (int i = 0; i < size; i++)
        {
            c+=this->arr[i]+a.arr[i];
        }

        return c;
    }

};

int main()
{
    abhay ab(3);
    ab.arr[0]=1;
    ab.arr[1]=2;
    ab.arr[2]=4;

    abhay ab1(3);
    ab1.arr[0]=9;
    ab1.arr[1]=0;
    ab1.arr[2]=1;

    int b=ab.addition(ab1);
    cout<<b<<endl;
    return 0;
}