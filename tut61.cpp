#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    //string ab="hello how are you";

    //ofstream out("sample60.txt");
    //out<<ab;

    //out.close();

    string name;
    cout<<"enter your name "<<endl;
    cin>>name;

    ofstream a("sample60.txt");
    a<<name;
    cout<<name;
    a.close();

    string content;
    cout<<"the content of this file is "<<content<<endl;
    ifstream ab("sample60.txt");
    ab>>content;
    ab.close();

    return 0;

}