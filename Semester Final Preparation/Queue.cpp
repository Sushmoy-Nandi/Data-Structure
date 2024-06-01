#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
class myQueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    void enqueue(int val)
    {
        sz++;
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = tail->next;
    }
    void dequeue()
    {
        sz--;
        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;
        if (head == NULL)
        {
            tail = NULL;
        }
    }
    int front()
    {
        return head->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        if (sz == 0)
            return true;
        else
            return false;
    }
    void printQueue()
    {
        Node *tmp = head;
        while (tmp != NULL)
        {
            cout << tmp->val << " ";
            tmp=tmp->next;
        }
        cout<<endl;
    }
};
int main()
{
    myQueue q;
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     int x;
    //     cin >> x;
    //     q.enqueue(x);
    // }
    // while (!q.empty())
    // {
    //     cout << q.front() << endl;
    //     q.dequeue();
    // }

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    cout << "Number of elements in the queue: " << q.size() << endl;

    cout << "Stack Elements:" << endl;
    q.printQueue();

    cout << "After poping Stack Elements:" << endl;
    q.dequeue();
    q.printQueue();

    return 0;
}