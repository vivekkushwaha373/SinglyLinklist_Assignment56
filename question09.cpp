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
void Size()
{
    cout<<"size= "<<size<<endl;
}
checkpalindrome()
{
   
    int count=0;
    node *ptr[size];
    node* t=head;
    while(t!=NULL)
    {
        
        ptr[count]=t;
        t=t->next;
        count++;

    }
   
   count=0;
   for(int i=0;i<size/2;i++)
   {
    
    if(ptr[i]->value==ptr[size-1-i]->value)
    count++;
   }

   
   if(count==size/2)
   {
    cout<<"It is palindrome"<<endl;
   }
   else
   cout<<"It is not palindrome"<<endl;
   
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
    s.insert(1);
    s.insert(2);
    s.insert(11);
    s.insert(2);
    s.insert(1);
    
    s.display();
    s.Size();
    s.checkpalindrome();
    return 0;
}