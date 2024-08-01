#include<iostream>
using namespace std;

class shop
{
    int itemid[100];
    int itemprice[100];
    int counter;

    public:

    void setprice();
    void initcounter(){counter =0;}
    void displayprice();

};

void shop::setprice()
{
    cout<<"enter your item id"<<counter+1<<endl;
    cin>>itemid[counter];
    cout<<"enter your item price"<<counter+1<<endl;
    cin>>itemprice[counter];
    counter++;
}

void shop :: displayprice()
{
    for (int i = 0; i < counter; i++)
    {
        cout<<"price of item with id is "<< itemid[i] <<  "is" <<itemprice[i]<<endl;
        
    }
        
}

int main()
{
    shop vybe;
    vybe.initcounter();
    vybe.setprice();
    vybe.setprice();
    vybe.setprice();
   
    vybe.displayprice();

    return 0;

}