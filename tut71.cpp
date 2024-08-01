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
    cout<<"enter the size you want to see"<<endl;
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cout<<"enter the number you need to see the operation"<<endl;
        cin>>element;
        vec1.push_back(element);

    }

    display(vec1);
    vector<int>::iterator iter =vec1.begin();
    vec1.insert(iter,5,56);
    display(vec1);

    
    return 0;
}