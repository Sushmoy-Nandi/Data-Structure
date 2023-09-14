#include<bits/stdc++.h>
using namespace std;
int main()
{
    // replace
    // vector<int>v={1,2,2,3,4,5,6,7,2,5};
    // replace(v.begin(),v.end(),2,10);
    // replace(v.begin(),v.end()-2,2,10);
    // for(int x:v)
    // {
    //     cout<<x<<" ";
    // }
    vector<int>v={1,2,2,3,4,5,6,7,2,5};
    auto it=find(v.begin(),v.end(),10);
    //cout<<*it;
    if(it == v.end()) cout<<"Not Found"<<endl;
    else cout<<"Found";

    return 0;
}