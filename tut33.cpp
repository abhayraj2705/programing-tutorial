#include<iostream>
using namespace std;
class bankdeposite
{
    int year;
    int principle;
    float interestrate;
    float returnvalue;

    public:

    bankdeposite(){}
    bankdeposite(int y,int p,float r);
    bankdeposite(int y, int p, int r);

    void Show();
   
};

bankdeposite::bankdeposite(int p,int y,float r )
{
    year=y;
    principle=p;
    interestrate=r;
    returnvalue=principle;

    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1+interestrate);
    }
    
}

bankdeposite::bankdeposite(int p,int y,int r)
{
    principle=p;   
    year=y;
    interestrate=float(r)/100;
    returnvalue=principle;
    for (int i = 0; i < y; i++)
    {
        returnvalue=returnvalue * (1+interestrate);
    }    
}
void bankdeposite :: Show()
{
    cout<<endl<<"Principal amount was "<<principle
        << ". Return value after "<<year
        << " years is "<<returnvalue<<endl;

}

int main()
{
    bankdeposite bd1,bd2,bd3;
    int p,y;
    float r;
    int R;

    cout<<"enter your principle amount p,y,r"<<endl;
    cin>>p>>y>>r;

    bd1=bankdeposite(p,y,r);
    bd1.Show();

    cout<<"enter your principle amount p,y,R"<<endl;
    cin>>p>>y>>R; 

    bd2=bankdeposite(p,y,R);
    bd2.Show();    

    return 0;      
}