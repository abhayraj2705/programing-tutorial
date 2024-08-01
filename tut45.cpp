#include<iostream>
using namespace std;

class student
{
    protected:
    int roll_no;
    public:
    void set_rollno(int r)
    {
        roll_no=r;
    }

    void get_rollno()
    {
        cout<<"the roll no of your student is "<<roll_no<<endl;
    }

};

class test : virtual public student
{
    protected:
    float maths;
    float physics;

    public:

    void setmark(float m1, float m2 )
    {
        maths=m1;
        physics=m2;
    }

    void get_marks()
    {
        cout<<"your final result is "<<endl<<"the marks of maths is "<<maths<<endl<<"the marks of physics is "<<physics<<endl;
    }
};

class sports : virtual public student
{
    protected:
    float sportscore;
    public:

    void set_sportscore(float s)
    {
        sportscore=s;
    }

    void get_sportscore()
    {
        cout<<"your sports score is "<<sportscore<<endl;
    }
};

class result :  public test, public sports
{
    private:

    float total;
    public:

    void display()
    {
        total=maths+physics+sportscore;
        get_rollno();
        get_sportscore();
        get_marks();
        cout<<"the total result is "<<total<<endl;

    }
};

int main()
{
    result c1;
    c1.set_rollno(14);
    c1.setmark(90.0,94.0);
    c1.set_sportscore(89.0);
    c1.display();
    return 0;
}