#include<iostream>
using namespace std;
int main()
{
    //int age;
    //cout<<"enter your age";
    //cin>>age;
    //if (age<18)
    //{
    //    cout<<"you are not eligible for party better luck next time"<<endl;
    //}
    //else if(age==18)
    //{
    //    cout<<"you are eligible for party"<<endl;
    //}
    //else
    //{
    //    cout<<"welcome for the party"<<endl;
    //}
//
    //return 0;

    int age;
    cout<<"enter your age"<<endl;
    cin>>age;
    switch(age)
    {
        case 34:
        {
            cout<<"yes you are are eligible"<<endl;
            break;
        }

        case 40:
        {
            cout<<"you are mostly welcomed"<<endl;
            break;
        }

        case 56:
        {
            cout<<"eligible"<<endl;
            break;
        }

        default:
        {
            cout<<"better luck next time"<<endl;
            break;
        }
    }

    return 0;
}