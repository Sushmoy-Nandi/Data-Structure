#include<bits/stdc++.h>
using namespace std;
int main() 
{
    queue<int> q;
    queue<int> newQ;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) 
    {
        int x;
        cin >> x;
        q.push(x);
    }

    while (!q.empty()) 
    {
        newQ.push(q.front());   
        q.pop();
    }

   cout << "QUEUE" << endl;
    while (!newQ.empty())  
    {
        cout << newQ.front() << " ";
        newQ.pop();
    }

    return 0;
}
