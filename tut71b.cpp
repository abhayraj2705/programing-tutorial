#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    
}

int main()
{
    vector<int> vec1;
    int size,element;
    cout<<"enter your size you want ";
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cout<<"enter the value of the you want to give "<<endl;
        cin>>element;
        vec1.push_back(element);
    }
    display(vec1);

    return 0;
}
