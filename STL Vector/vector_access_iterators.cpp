#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int>v={1,2,3,4,5};
    //cout<<v[3]<<endl;
    //cout<<v.at(3)<<endl;
    //cout<<v.back()<<endl;
    //cout<<v.front()<<endl;

    //iterators
    for(auto it=v.begin();it<v.end();it++)
    {
        cout<<*it<<" ";
    }
    return 0;
}