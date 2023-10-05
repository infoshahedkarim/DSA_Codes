//Last in First Out -> Stack
#include<bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node* next;

    node(int val)
    {
        data = val;
        next = NULL;
    }

};

void push(node* &head,int val)
{
    node* temp = new node(val);
    temp->next = head;
    head = temp;

}

void pop(node* & head)
{
    node* temp = head;
    if(temp==NULL)
    {
        cout<<"stack is Null"<<endl;
    }
    head = head->next;

    delete temp;
}

void pick(node* & head)
{
    node* temp = head;
    if(temp==NULL)
    {
        cout<<"stack is Null"<<endl;
    }
    cout<<temp->data<<endl;
}

void Search(node* &head,int val)
{
   node* team = head;
   int flag=0;
   while(team!=NULL)
   {

       if(team->data==val)
       {
           cout<<"value found"<<endl;
           flag = 1;
       }
       team = team->next;
   }
   if(flag ==0)
   cout<<"value not fount"<<endl;

}

void PrintList(node* &head)
{
    node* temp =head;
    while(temp!=NULL)
    {
        cout<<temp->data<< "->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int main()
{
    node* head = NULL;
    push(head,4);
    push(head,3);
    push(head,2);
    push(head,1);
    PrintList(head);
    pop(head);
    pick(head);
    Search(head,0);
    PrintList(head);
}
