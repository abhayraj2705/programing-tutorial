#include<iostream>
#include<vector>
using namespace std;

template<class T>

void display(vector<T> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" "<<endl;
    }
    
}

int main()
{
    vector<int>vec1;
    vector<int>vec2(4);
    vector<int>vec3(vec2);
    vector<int>vec4(6,3);
    vec1.push_back(3);
    display(vec1);
    vec2.push_back(1);
    vec2.pop_back();
    display(vec2);
    display(vec3);
    vec4.pop_back();
    display(vec4);
    return 0;
}