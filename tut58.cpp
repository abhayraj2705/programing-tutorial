#include<iostream>
using namespace std;

class abhay
{
    protected:
    string name;
    float id;
    public:

    abhay(string s, int d)
    {
        name=s;
        id=d;
    }

    virtual void display()=0;

};

class abhay2:public abhay
{
    string schoolname;
    public:

    abhay2(string s,int d,string sc):abhay(s,d)
    {
        schoolname=sc;
    }

    void display()
    {
        cout<<"the name is "<<name<<endl;
        cout<<"the student id is "<<id<<endl;
        cout<<"the schoolname is "<<schoolname<<endl;
    }
};

class derived:public abhay{
    int rollcall;
    public:
    derived(string s, int d, int r):abhay(s,d)
    {
        rollcall=r;
    }

    void display()
    {
        cout<<"the name of the student is  "<<name<<endl;
        cout<<"the id no of the student id "<<id<<endl;
        cout<<"the rollcall  of the student is given as "<<rollcall<<endl;
    }
};

int main()
{
    int rollcall;
    float id;
    string schoolname,name;

    rollcall=2;
    id=1.0;
    schoolname="the radiant international school";
    name="abhayraj  b";

    abhay2 ab(name,id,schoolname);
    derived a(name , id ,rollcall);
    abhay*ac[2];
    ac[0]=&ab;
    ac[1]=&a;
    ac[0]->display();
    ac[1]->display();

    return 0;
}