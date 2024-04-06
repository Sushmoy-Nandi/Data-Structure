#include<bits/stdc++.h>
using namespace std;
int main() 
{
    stack<int> st;
    stack<int> newst;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) 
    {
        int x;
        cin >> x;
        st.push(x);
    }

    while (!st.empty()) 
    {
        newst.push(st.top());   
        st.pop();
    }

    cout << "STACK" << endl;
    while (!newst.empty()) 
    {
        cout << newst.top() << " ";
        newst.pop();
    }

    return 0;
}
