#include<iostream>
using namespace std;
class node
{
   public:
   int data;
   node* next;


   node(int val)
   {
      data=val;
     next=NULL;
   }


};




void insert_at_start(node* &head,int val)
{
    node *n=new node(val);
    n->next=head;
    head=n;

}
void insert_after_node(int val,node*& p)
{
    node *n=new node(val);
    n->next=p->next;
    p->next=n;



}

void insert_at_tail(node* &head ,int val)
{
    node* n=new node(val);
   if(head==NULL)
   {
       head=n;
       return;

   }
   node *temp=head;
   while(temp->next!=NULL)
   {
      temp=temp->next;

   }
   temp->next=n;
   n->next=NULL;
}
void display(node *head)
{

     node *temp=head;
     while(temp!=NULL)
     {
         cout<<temp->data<<"->";
         temp=temp->next;
     }
     cout<<"null"<<endl;
}
void  search(node *&head,int key)
{

    int k=1;
    node *t=head;
    while(t!=NULL)
    {
        if(t->data==key)
        {
            cout<<"position of element"<<k;


        }
           t=t->next;
           k++;

    }


    }
    bool searchi(node *head,int key)
    {
        node *temp=head;
        while(temp!=NULL)
        {
          if(temp->data==key)
        {
            return true;

        }
           temp=temp->next;

        }




    }
   void delete_at_start(node *&head)
    {


        if(head==NULL)
        {

            cout<<"List is empty ,enter an element first to carry out delete operation";
            return;
        }

        node *p=head;
        head=head->next;
        delete(p);



    }







int main()
{

   node *head=NULL;
   node *p;
   int s,key;
   int val;
   cin>>s;
   for(int i=0;i<s;i++)
   {
      insert_at_tail(head,i+1);

   }
   cout<<"enter val at start";
   cin>>val;
   insert_at_start(head,val);
    display(head);
    cin>>key;
    search(head,key);
    cout<<searchi(head,key);
    cout<<"enter the node position after which u want to insert new  node";
    p=head;
    int i=1;
    int pos;
    cin>>pos;
    while(i!=pos)
    {
         p=p->next;
         i++;
    }
    insert_after_node(17,p);
    display(head);



    insert_after_node(val,p);
    cout<<endl;
    delete_at_start(head);
    cout<<endl;
    display(head);
    return 0;
}










