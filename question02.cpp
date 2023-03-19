#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int value;
    node* next;
};
class LL
{
public:
node* head;
LL()
{
    head=NULL;
}
RemoveDuplicate()
{
   node* t=head;
 while(t->next!=NULL)
 { 
   if(t->value==t->next->value)
   t=deleteE(t);
   else
   t=t->next;
 }
} 
node* deleteE(node*s)
{

node *t=head;
if(s==head)
{   
    head=head->next;
    delete t;
    return head;
}
else
{
    
while(t->next!=s)
{
    // cout<<"t";
  t=t->next;
}
node* p=t->next;
t->next=t->next->next;
delete p;
return t->next;
}

}

void search(int n)
{
node *t=head;
while(t!=NULL)
{
    if(t->value==n)
    {
        cout<<"Yes "<<endl;
        return ;
    }
    t=t->next;

}
cout<<"No"<<endl;
return ;
}
insert(int v)
{
    node* temp= new node;
    temp->value=v;
    temp->next=NULL;
    if(head==NULL)
    {
      head=temp;
    }
    else
    {
       node* t=head;
       while(t->next!=NULL)
       {
        t=t->next;
       }
       t->next=temp;
    }

}
display()
{
   
    node* t=head;
    while(t!=NULL)
    {
  
     cout<<t->value<<" ";
     t=t->next;
    }
    cout<<endl;
}
};
int main()
{
    LL s;
    s.insert(11);
    s.insert(11);
    s.insert(11);
    s.insert(21);
    s.insert(43);
    s.insert(43);
   
    s.insert(60);
    // s.insert(78);
    s.display();
    // s.search(14);
    s.RemoveDuplicate();
    s.display();
    return 0;
}