#include<iostream>
#include<cstdlib>
using namespace std;

class LL;//forward declaration
class node
{
friend class LL;
int value;
node* next;

};
class LL
{
int size=4;
node* head;
public:
LL()
{
head=NULL;
}
void push(int v)
{
node* ptr=new node;
ptr->next=NULL;
ptr->value=v;
if(IsFullStack())
{
    cout<<"Stack is Full"<<endl;
    return ;
}
else if(head==NULL)
{
    head=ptr;
   
}
else
{

    ptr->next=head;
    head=ptr;

    
}


}
void Top()
{
    
    if(IsEmptyStack())
    cout<<"It is an  empty stack: "<<endl;
    else
    cout<<"Top = "<<head->value<<endl;
}
void pop()
{
    if(IsEmptyStack())
    {
        cout<<"No Element : It cannot be popped"<<endl;
      
    }
    else
    {
    node* t=head;
    head=head->next;
    delete t;
      
    }
}
int IsFullStack()
{
   int t=size;
   node* ptr=head;
   if(ptr==NULL)
   {
    return 0;
   }
   else
   {
   while(ptr->next!=NULL)
   {
    ptr=ptr->next;
    t--;
   }
 
    if(t<=1)
   return 1;
   else
   return 0;
   }
  
}
int IsEmptyStack()
{
    if(head==NULL)
    return 1;
    else
    return 0;
}
void display()
{
    
    node *t=head;
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
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
  
    s.display();
    s.Top();
    s.pop();
    s.display();
    if(s.IsFullStack())
    cout<<"stack is Full"<<endl;
    return 0;
}