#include<iostream>
using namespace std;

class base1
{
    protected:
    int rollno;
    public:
    void set_rollno(int);
    void get_rollno();
};
void base1::set_rollno(int r)
{
    rollno=r;
}
void base1::get_rollno()
{
    cout<<"the rollno of student is"<<rollno<<endl;
}
class base2
{
    protected:
    int marks;
    public:
    void set_marks(int);
    void get_marks();

};

void base2::set_marks(int m)
{
    marks=m;
}

void base2::get_marks()
{
    cout<<"the total marks of student is"<<marks<<endl;
}

class derive:public base1 , public base2
{
    float percentage;
    public:
    void get_result()
    {
        get_rollno();
        get_marks();
        cout<<"the percentage of student is"<<(marks*100)/100<<endl;

    }
}; 

int main()
{
    derive harry;
    harry.set_rollno(23);
    harry.set_marks(98);
    harry.get_result();
    return 0;
}