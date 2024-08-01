#include<iostream>
using namespace std;

class student
{
    protected:
    int rollno;

    public:
    void set_rollno(int);
    void get_rollno();

};

void student::set_rollno(int r)
{
    rollno=r;
}

void student::get_rollno()
{
    cout<<"the value of roll no is"<<rollno<<endl;
}

class marks:public student
{
    protected:
    float maths;
    float physics;
    public:
    void set_marks(float,float);
    void get_marks();
};

void marks::set_marks(float m,float n)
{
    maths=m;
    physics=n;
}

void marks::get_marks()
{
    cout<<"the marks of maths are"<<maths<<endl;
    cout<<"the marks of physics are"<<physics<<endl;
}

class result : public marks
{
    float percentage;
    public:
    void get_result()
    {
        get_rollno();
        get_marks();
        cout<<"the percentge is "<<(maths+physics)/2;
    }
};
int main()
{
    result harry;
    harry.set_rollno(1);
    harry.set_marks(90.0,94.0);
    harry.get_result();
    return 0;
}