#include<iostream>
using namespace std;

class vector
{
    public:

    int*arr;
    int size;

    vector(int m)
    {
        size=m;
        arr=new int[size];
    }

    int dotproduct(vector &v)
    {
        int d=0;

        for (int i = 0; i < size; i++)
        {
            d+=this->arr[i]*v.arr[i];

        }
        return d;
        
    }

};

int main()
{
    vector v1(2);
    v1.arr[0]=1;
    v1.arr[1]=3;

    vector v2(2);
    v2.arr[0]=1;
    v2.arr[1]=3;
   
    int a=v1.dotproduct(v2);
    cout<<a<<endl;
    return 0;
}
