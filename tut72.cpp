#include<iostream>
#include<list>
using namespace std;

void display(list<int> &lst)
{
    list<int>::iterator itr1;
    for ( itr1 = lst.begin(); itr1!=lst.end(); itr1++)
    {
        cout<<*itr1<<" ";
    }

    cout<<endl;
    
}

int main()
{
    list<int>list1;
    list<int>list2(3);

    list1.push_back(1);
    list1.push_back(2);
    list1.push_back(3);
    list1.push_back(5);

    //list<int>::iterator iter;
    //iter=list1.begin();
    //cout<<*iter<<" ";
    //iter++;
    //cout<<*iter<<" ";
    //iter++;
    //cout<<*iter<<" ";
    //iter++;
    display(list1);
    
    list<int>::iterator itr1;
    itr1=list2.begin();

    *itr1=43;
    cout<<*itr1<<" ";
    itr1++;

    *itr1=3;
    cout<<*itr1<<" ";
    itr1++;

    *itr1=53;
    cout<<*itr1<<" ";
    itr1++;

    list2.pop_back();
    display(list2);
    list2.pop_front();
    display(list2);
    list1.remove(3);
    display(list1);
    list2.sort();
    display(list2);
    return 0;
}