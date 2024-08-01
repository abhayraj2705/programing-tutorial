#include<iostream>
using namespace std;
int main()
{
    int marks[]={23,45,67,12};
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;

    //initialisation of array

    int mathmarks[4];
    mathmarks[0]=12;
    mathmarks[1]=52;
    mathmarks[2]=22;
    mathmarks[3]=32;

    cout<<mathmarks[0]<<endl;
    cout<<mathmarks[1]<<endl;
    cout<<mathmarks[2]<<endl;
    cout<<mathmarks[3]<<endl;

  //program using pointer 
    int*p=marks;
    // pointer using array me adrress nhi ataa hai

    cout<<"the value of pointer is "<<*p<<endl;
    cout<<"the value of pointer is "<<*(p+1)<<endl;
    cout<<"the value of pointer is "<<*(p+2)<<endl;
    cout<<"the value of pointer is "<<*(p+3)<<endl;

    cout<<*(p++)<<endl;
    cout<<*(++p)<<endl;

  //arrays using for loop

  for (int i = 0; i < 4; i++)
  {
    cout<<marks[i]<<endl;
  }
  




    return 0;
}