#include<iostream>
using namespace std;

class employee
{
    public:

    int id;
    float salary;

    employee(int inpid)
    {
        id=inpid;
        salary=39;
    }

    employee(){}

};

class programing : public employee
{

    public:
    int languagecode;

    programing(int inpid)
    {
        id=inpid;
        languagecode=9;
    }

};

int main()
{
    employee harry(1),ab(2);
    cout<<harry.salary<<endl;
    cout<<ab.salary<<endl;

    programing c1(3);
    cout<<c1.languagecode<<endl;
    cout<<c1.id<<endl;
    

    return 0;
}