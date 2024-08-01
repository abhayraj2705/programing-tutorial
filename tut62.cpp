#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    ofstream ab;
    ab.open("sample60.txt");
    ab<<"this is me abhayraj b hod of indigo website operations ";
    ab.close();
    ifstream in;
    string st;
    in.open("sample60b.txt");

    while (in.eof()==0)
    {
        getline(in,st);
        cout<<st;
    }
    

    return 0;
}