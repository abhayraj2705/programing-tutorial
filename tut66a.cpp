#include<iostream>
using namespace std;
template<class T1=int,class T2=string,class T3=float>

class data
{
    public:
    T1 marks;
    T2 name;
    T3 totalscore;

    data(T1 m,T2 n,T3 t)
    {
        marks=m;
        name=n;
        totalscore=t;
    }

    void display()
    {
        cout<<"the marks of the student is "<<marks<<endl;
        cout<<"the name of the student is "<<name<<endl;
        cout<<"the totalscore of the student is "<<totalscore<<endl;
    }

};

int main()
{
    data<>a(89,"Abhayraj b",89.0);
    data<>b(95,"Prmait sil",95.0);
    data<>c(92,"Shashank sinha ",92.0);
    a.display();
    cout<<endl;
    b.display();
    cout<<endl;
    c.display();
    return 0;
}