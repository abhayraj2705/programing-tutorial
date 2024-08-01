#include<iostream>
using namespace std;
class employee
{
    static int count;
    int id;
    public:
    void setdata()
    {
        cout<<"enter your employee id"<<endl;
        cin>>id;
    }

    void getdata()
    {
        cout<<"your employee id is "<<id<< " and your count is "<<count+1<<endl;
        count++;
    }

   static void getch()
   {
     cout<<"the employee count is "<<count<<endl;
   }
};

int employee::count=1000;

int main()
{ 
    employee harry;
    harry.setdata();
    harry.getdata();
    employee::getch();
    harry.setdata();
    harry.getdata();
    employee::getch();


    return 0;
}