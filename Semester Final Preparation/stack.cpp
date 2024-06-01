#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
class myStack
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    void push(int val)
    {
        sz++;
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        newNode->prev = tail;
        tail->next = newNode;
        tail = tail->next;
    }
    void pop()
    {
        sz--;
        Node *deleteNode = tail;
        tail = tail->prev;
        if (tail == NULL)
        {
            head = NULL;
        }
        else
        {
            tail->next = NULL;
        }

        delete deleteNode;
    }
    int top()
    {
        return tail->val;
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

    void printStack() 
    {
        Node* tmp = tail;
        while (tmp != NULL) {
            cout << tmp->val << " ";
            tmp = tmp->prev;
        }
        cout << endl;
    }
};
int main()
{
    myStack st;
    
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    cout << "Number of elements in the stack: " << st.size() << endl;

    // cout << "Stack Elements:" << endl;
    // while (!st.empty()) {
    //     cout << st.top() << endl;
    //     st.pop();
    // }

    cout << "Stack Elements:" << endl;
    st.printStack();

    cout << "After poping Stack Elements:" << endl;
    st.pop();
    st.pop();
    st.printStack();


    return 0;
}