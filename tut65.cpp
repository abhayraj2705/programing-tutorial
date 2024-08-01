#include<iostream>
using namespace std;
template<class T ,class T2>

class abhay
{
    public:

    T data1;
    T2 data2;
    abhay(T a, T2 b)
    {
        data1=a;
        data2=b;
    }

    void display()
    {
        cout<<this->data1<<endl<<this->data2<<endl;
    }

};

int main()
{
    abhay<int,char>ab(1,'c');
    ab.display();

    return 0;
}