#include<iostream>
using namespace std;
int sum(int a, int b)
{

   return a+b;

}
 
 //volume wala example dekh lena bas 
int sum(int a ,int b, int c)
{
    return a+b+c;
}
int main()
{

  int a,b,c;
  cout<<"enter the value of a"<<endl;
  cin>>a;
  cout<<"enter the value of b"<<endl;
  cin>>b;
  cout<<"enter the value of c"<<endl;
  cin>>c;
  cout<<"the sum of a and b is : "<<sum(a,b)<<endl;
  cout<<"the sum of a and b is : "<<sum(a,b,c)<<endl;
  
    return 0;
}

