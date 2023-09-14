#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={1,2,3,4,5,6};
    v.insert(v.begin()+2,10); //insert just value
    //vector<int> v2={5,10,15};
    // v.insert(v.begin()+2,v2.begin(),v2.end()); insert a tootall vector
    // for(int i=0;i<v.size();i++)
    // {
    //     cout<<v[i]<<" ";
    // }
    // shortcut loop(range loop)
    for(int x:v)
    {
        cout<<x<<" ";
    }
    return 0;
}