#include<bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node* next;// pointer nichchi ja (14no line theke) null point kore

    //constructor
    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void InsertAtHead(node* &head, int val)
{
    node* n = new node(val);
    n -> next = head;
    head = n;
}

void InsertAtLast(node* &head, int val)// null er address arche ar value arche
{

    node* n = new node(val);
     if(head == NULL)// head = null;
    {
        head = n;
        return ;
    }
    node* team = head;// first e head e 1 asbe then 3 er time team hold korbe 1 er address
    while(team -> next != NULL)// in case of 3, it is false,
    {
        team = team->next;
    }
    team->next=n;
}

int Search(node* &head, int key)
{
    node* team = head;
    while(team!= NULL)
    {
        if(team->data == key)
        {
            return true;
        }
        team = team->next;
    }
    return false;
}

void PrintList(node* &head)
{
    node* team = head;
    while(team!=NULL)
    {
        cout<<team->data<<" -> ";
        team = team->next;
    }
    cout<<"NULL"<<endl;
}

void DeletionAtFirst(node* &head)
{
    node* team = head;
    head = head->next;
    delete team;
    //70-71 tutorials line & 73-74 my idea.
    //team = team->next;
    //head = team;
}

void Deletion(node* &head, int val)
{
    node* team = head;
    if(team==NULL)
    {
        return;
    }
    if(team->next==NULL)
    {
        DeletionAtFirst(team);
    }
    while(team->next->data!=val)
    {
        team=team->next;

    }
    node* atDelete = team->next;
    team->next = team->next->next;

    delete atDelete;
}

int main()
{
    node* head=NULL;// haed NULL k point kortiche
    InsertAtLast(head,1);
    InsertAtLast(head,3);
    InsertAtLast(head,4);
    InsertAtHead(head,6);
    PrintList(head);
    cout<<Search(head,3)<<endl;
    Deletion(head,3);
    PrintList(head);
    DeletionAtFirst(head);
    DeletionAtFirst(head);
    DeletionAtFirst(head);
    PrintList(head);
    return 0;

}
