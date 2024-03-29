#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    queue<int> q;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int y;
        cin >> y;
        q.push(y);
    }
    // cout<<"STACK"<<endl;
    // while (!st.empty())
    // {
    //     cout << st.top() << endl;
    //     st.pop();
    // }

    // cout<<"QUEUE"<<endl;
    // while (!q.empty())
    // {
    //     cout << q.front() << endl;
    //     q.pop();
    // }
    int isSame = 1; 

    if (st.size() != q.size()) 
    {
        isSame = 0;
    } 
    else 
    {
        while (!st.empty() && !q.empty()) 
        {
            if (st.top() != q.front()) 
            {
                isSame = 0;
                break;
            }
            st.pop();
            q.pop();
        }
        if (!st.empty() || !q.empty()) 
        {
            isSame = 0;
        }
    }

    //cout << "isSame Value " << isSame << endl;

    if (isSame==1) 
    {
        cout << "YES" << endl;
    } 
    else 
    {
        cout << "NO" << endl;
    }

    return 0;

}