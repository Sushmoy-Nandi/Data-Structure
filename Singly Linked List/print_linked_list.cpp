#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
       int val;
       Node* next;
       Node(int val)
       {
        this->val=val;
        this->next=NULL;
       }
};
int main()
{
    Node *head=new Node(10);
    Node *a=new Node(20);
    Node *b=new Node(30);
    Node *c=new Node(40);
    Node *d=new Node(50);

    head->next=a;
    a->next=b;
    b->next=c;
    c->next=d;
    // simple process
    // cout<<head->val<<endl;
    // cout<<head->next->val<<endl;
    // cout<<head->next->next->val<<endl;
    // cout<<head->next->next->next->val<<endl;
    // cout<<head->next->next->next->next->val<<endl;
    
    // head not found because head is now NULL.we need to fix it
    // while(head!=NULL)
    // {
    //     cout<<head->val<<endl;
    //     head=head->next;
    // }
    
    //we use another poinetr *tmp because we want to store head. we store head
    // in *tmp so that head found in future
    Node *tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<endl;
        tmp=tmp->next;
    }

    
    return 0;
}