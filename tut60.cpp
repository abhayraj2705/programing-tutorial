#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    string st="abhayraj b";
    string st1;

    //ofstream out("sample60.txt");
    //out<<st;

    //ofstream iut("tut57b.cpp");
    //iut<<st;

    ifstream n("sample60b.txt");
   // in>>st1;
    getline(n,st1);
    
    cout<<st1;
    return 0;
}