#include<iostream>
#include<cmath>
using namespace std;

class point 
{
    int x;
    int y;

    int x1;
    int y1;

    public:

    friend point distance(point a1,point b1);
    

   

    void setdata(int a, int b)
    {
        x=a;
        y=b;
    }

   

    void println()
    {
        cout<<"("<<x<<","<<y<<")"<<endl;
    }
    


};




 point distance(point a1, point b1)
{

   float dist;
   dist=sqrt(pow (a1.x-a1.x1,2)+pow(b1.y-b1.y1,2));
   cout<<dist<<endl;

}




int main()
{
   point a1,a2;
   a1.setdata(2,4);
   a1.println();
   a2.setdata(5,7);
   a2.println();

   distance(a1,a2);
   
   

    return 0;
}