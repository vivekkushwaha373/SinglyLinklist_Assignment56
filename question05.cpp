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

void checkloop()
{
node* arr[20];int i=1;
node* temp=head;
arr[0]=head;
while(temp!=NULL)
{
arr[i]=temp->next;
for(int j=0;j<i;j++)
{
    if(arr[i]==arr[j])
    {cout<<"list is circular"<<endl;
    return ;}
}
temp=temp->next;
i++;
} 
cout<<"List is not circular"<<endl;
return ;   
}
Attachlastloopto(int n)
{
    node* temp=head;
    while((n-1)>1)
    {
        temp=temp->next;
        n--;
    }
    node *t=temp->next;
    temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=t;
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
    s.checkloop();
    // s.search(14);
    s.Attachlastloopto(2);
    s.checkloop();
    
    // s.display();
    return 0;
}