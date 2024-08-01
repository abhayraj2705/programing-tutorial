#include<iostream>
using namespace std;

 inline int product(int a, int b)
{
   
    int static c =0;
    c=c+1;
    return a*b+c;
}



int main()
{
    int a,b,c;
    cout<<"enter the number a"<<endl;
    cin>>a;
    cout<<"enter the number b"<<endl;
    cin>>b;

    cout<<"so their product is given as: "<<product(a,b)<<endl;
    cout<<"so their product is given as: "<<product(a,b)<<endl;
    cout<<"so their product is given as: "<<product(a,b)<<endl;
    cout<<"so their product is given as: "<<product(a,b)<<endl;
    cout<<"so their product is given as: "<<product(a,b)<<endl;
    cout<<"so their product is given as: "<<product(a,b)<<endl;

    return 0;

}