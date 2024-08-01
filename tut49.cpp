#include<iostream>
using namespace std;

class test 
{
    int a;
    int b;

    public:

   // test(int i,int j):a(i),b(2+(a*j))//
  // test(int i, int j):b(j),a(b+j)//
  test(int i,int j):a(i),b(i+j)
    {
       cout<<"the base class is called "<<endl;
       cout<<"the a constructor is called "<<a<<endl;
       cout<<"the b constructor is called "<<b<<endl;
    }
};

int main()
{
    test(4,6);
    return 0;
}