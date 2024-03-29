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

    // Copying contents of st1 to newst
    while (!st.empty()) 
    {
        newst.push(st.top());   
        st.pop();
    }

    cout << "STACK" << endl;
    // Printing the contents of newst (which contains the reversed elements of st1)
    while (!newst.empty()) 
    {
        cout << newst.top() << " ";
        newst.pop();
    }

    return 0;
}
