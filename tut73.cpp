#include<iostream>
#include<map>
#include<string>

using namespace std;

int main()
{
    map<string,int>Marksmap;
    Marksmap["abhayraj b"]=54;
    Marksmap["shashank"]=24;

    map<string,int>::iterator itr;
    itr=Marksmap.begin();
    Marksmap.insert({{"abhay",23},{"ramdhumne",34}});
    for ( itr = Marksmap.begin(); itr!=Marksmap.end(); itr++)
    {
        cout<<(*itr).first<<" "<<(*itr).second<<" ";
    }
    
    return 0;
}