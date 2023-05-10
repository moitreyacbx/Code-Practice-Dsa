#include <iostream>
#include <string>
using namespace std;
typedef struct Node
{
    int val;
    Node *next;
} Node;
Node* createNode(int val)
{
    Node *temp = new Node;
    temp->val=val;
    temp->next=NULL;
    return temp;
}
Node* createlist()
{
    int num=1;
    int val;
    Node *temp;
    Node *newnode;
    Node *head;
    head=temp;
    while(num)
    {
    cout<<"Do you want to add a node to your linked list?"<<endl;
    cout<<"Press 1 for Yes and 0 for No:"<<endl;
    cin>>num;
    if(num==0)
    {
        break;
    }
    cout<<"Enter the value:"<<endl;
    cin>>val;
    newnode=createNode(val);
    temp->next=newnode;
    temp=temp->next;
    }
    cout<<"List Created!"<<endl;
    return head->next;
}
void display(Node *head)
{
    Node* temp;
    temp=head;
    while(temp!=NULL)
    {
        cout<<temp->val<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
}
int main()
{
    Node* head=createlist();
    display(head);
    return 0;
}