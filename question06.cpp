#include<iostream>
using namespace std;
class node
{
    public:
    int value;
    node* next;
};
class LL
{
node* head;
public:
LL()
{
    head=NULL;
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
int key(int n)
{
    int count=0;
    node*t=head;
    while(t!=NULL)
    {
        if(t->value==n)
        {
        count++;
        }
        t=t->next;
    }
    return count;
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
    s.insert(14);
    s.insert(21);
    s.insert(11);
    s.insert(30);
    s.insert(10);
    s.display();
    // s.search(14);
    cout<<s.key(14);
    return 0;
}