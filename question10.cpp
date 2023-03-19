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
int size=0;
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
Size()
{
    cout<<"Size is : "<<size<<endl;
}
middle()
{
    node*t=head;
    int n=size/2;
    while(n!=0)
    {
      t=t->next;
      n--;
    }
    cout<<"Middle Element is: "<<t->value<<endl;
}
insert(int v)
{
    node* temp= new node;
    temp->value=v;
    temp->next=NULL;
    if(head==NULL)
    {
      head=temp;
      size++;
    }
    else
    {
       node* t=head;
       while(t->next!=NULL)
       {
        t=t->next;
       }
       t->next=temp;
       size++;
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
    s.insert(14);
    s.insert(21);
    s.insert(11);
    s.insert(30);
    s.insert(10);
    s.insert(8);
    s.display();
    s.Size();
    s.middle();
    return 0;
}