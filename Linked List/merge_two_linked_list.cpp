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
void printLinkedList(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
Node *third = NULL;
void merge(Node *l1, Node *l2)
{
    Node *last;
    if(l1->val <l2->val)
    {
        third=last=l1;
        l1=l1->next;
        third->next=NULL;
    }
    else
    {
        third=last=l2;
        l2=l2->next;
        third->next=NULL;
    }
    while(l1 && l2){
        if(l1->val < l2->val)
        {
            last->next=l1;
            last=l1;
            l1=l1->next;
            last->next=NULL;
        }
        else
        {
            last->next=l2;
            last=l2;
            l2=l2->next;
            last->next=NULL;
        }
    }
    if(l1) last->next=l1;
    if(l2) last->next=l2;
}
int main()
{
   // First sorted linked list: 10 -> 30 -> 50
    Node* head1 = new Node(10);
    Node* a = new Node(30);
    Node* b = new Node(50);
    head1->next = a;
    a->next = b;

    // Second sorted linked list: 20 -> 40 -> 60
    Node* head2 = new Node(20);
    Node* c = new Node(40);
    Node* d = new Node(60);
    head2->next = c;
    c->next = d;

    // Merge the two sorted linked lists
    merge(head1, head2);

    // Print the merged linked list
    printLinkedList(third);
    
    return 0;
}