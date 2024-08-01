#include<iostream>
using namespace std;
#include<string>


class binary
{
    string s;
    public:
    void read();
    void check();
    void display();
    void onescomplememt();

};

void binary :: read()
{

    cout<<"enter the number :"<<endl;
    cin>>s;

}

void binary :: check()
{
   for (int i = 0; i < s.length(); i++)
   {
         if (s.at(i) !='0' && s.at(i) !='1')
         {
            cout<<" it is not a  binary"<<endl;
            exit(0);
         }

       

    }
   
}

void binary :: onescomplememt()
{
    for (int i = 0; i < s.length(); i++)
    {
        
        if(s.at(i)=='0')
        {
           s.at(i)='1';
        }

        else if(s.at(i)=='1'){
            s.at(i)='0';
        }
    }
    

}

void binary :: display()

{
    cout<<"the displaying binary is "<<endl;
    for (int i = 0; i < s.length(); i++)
    {
       cout<<s.at(i);
    }
    
}

int main()
{
    binary cp;
    cp.read();
    cp.check();
    cp.display();
    cp.onescomplememt();
    cp.display();
    return 0;
}