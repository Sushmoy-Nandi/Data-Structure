#include<bits/stdc++.h>
using namespace std;
class myStack {
public:
    vector<int> v;

    void push(int val) 
    {
        v.push_back(val);
    }
    void pop() 
    {
        v.pop_back();
    }
    int top() 
    {
        return v.back();
    }
    int size() 
    {
        return v.size();
    }
    bool empty() 
    {
        return v.empty();
    }
};
int main()
{
    myStack st1,st2;

    int n;
    cin>>n;
    for (int i=0;i<n;i++) 
    {
        int x;
        cin>>x;
        st1.push(x);
    }

    int m;
    cin>>m;
    for (int i=0;i<m;i++) 
    {
        int y;
        cin>>y;
        st2.push(y);
    }

    int isSame=1; 

    if(st1.size() != st2.size()) 
    {
        isSame=0;
    } 
    else 
    {
        for (int i=0;i<st1.size();i++) 
        {
            if(st1.v[i] != st2.v[i]) 
            {
                isSame=0;
                break;
            }
        }
    }

    //cout << "isSame Value " << isSame << endl;

    if (isSame==1) 
    {
        cout<<"YES"<<endl;
    } 
    else 
    {
        cout<<"NO"<<endl;
    }
    return 0;
}