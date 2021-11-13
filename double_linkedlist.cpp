#include<iostream>
#include<stlib.h>
using namespace std;

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
struct node *leftptr=NULL,*rightptr=NULL;
int num;
void create (struct node*);
void display(struct node*);
void insertfirst(struct node*);
void insertlast(struct node*);
void insertafter(struct node*);
int main()
{
    leftptr=new dlinklist;
    create(leftptr);
    display(leftptr);
    //insertfirst(lp);
    //insertlast(lp);
    insertafter(leftptr);
    display(leftptr);
}
void create(struct node*ptr)
{   
    num=0;
    int ch;
    leftptr->prev=NULL;
    do{
      cout<<"enter the data of node"<<num+1<<endl;
      cin>>ptr->data;
      cout<<"do you want another node? press  1"<<endl;
      cin>>ch;
      if(ch==1)
      {
          ptr->next=new node;
          ptr->next->prev=ptr;
          ptr=ptr->next;
      }
      num++;
      }while(ch==1);
ptr->next=NULL;
rightptr=ptr;
cout<<"total no. of nodes are:"<<num<<endl;
}
void display(struct node *ptr)
{
    while(ptr!=NULL)
    {
        cout<<ptr->data<<"<-->";
        ptr=ptr->next;
    }
    ptr=rightptr;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<"<-->";
        ptr=ptr->prev;
    }
}  

void insertfirst(struct node *ptr)
{
    struct dlinklist *new1;
    new1=new node;
    cout<<"enter value of inserting node";
    cin>>new1->data;
    if(ptr==NULL)
    {   
        new1->prev=NULL;
        new1->next=NULL;
        leftptr=new1;
    }
    else
    {
    new1->next=ptr;
    new1->prev=NULL;
    ptr->prev=new1;
    leftptr=new1;
    }

}

void insertlast(struct node *ptr)
{
    struct node *new1;
    new1=new node;
    cout<<"enter value of inserting node";
    cin>>new1->data;   
    if(ptr==NULL)
    {
        new1->next=NULL;
        new1->prev=NULL;
        leftptr=ptr;
    }
    else
    {   
        rightptr->next=new1;
        new1->next=NULL;
        new1->prev=rightptr;
        rightptr=new1;
        
    }
}

void insertafter(struct node *ptr)
{ int x;
    struct node *new1;
    new1=new node;
    cout<<"value of node";
    cin>>new1->data;
    cout<<"enter value before the place insertion ";
    cin>>x;
    while(ptr->data!=x && ptr!=NULL)
    {
        ptr=ptr->next;

    }
    if(ptr==NULL)
    {
        cout<<"element after which insertion does not exist";
    exit(0);
    }
    else if(ptr->next==NULL)
    {
    new1->next=NULL;
    new1->prev=ptr;
    ptr->next=new1;
    rightptr=new1;
    }
    else{
    ptr->next->prev=new1;
     new1->next=ptr->next;        
     new1->prev=ptr;
     ptr->next=new1;
    }
}
int main()
{
struct node *n1,*n2,*n3,*n4;
n1=(struct node*)malloc(sizeof(struct node));
n2=(struct node*)malloc(sizeof(struct node));
n3=(struct node*)malloc(sizeof(struct node));
n4=(struct node*)malloc(sizeof(struct node));
//linking nodes
n1->data=10;
n1->next=n2;
n1->prev=NULL;

n2->data=20;
n2->next=n3;
n2->prev=n1;

n3->data=30;
n3->next=n4;
n3->prev=n2;

n4->data=40;
n4->next=NULL;
n4->prev=n3;
cout<<"linked list before insertion"<<endl;
create(n1);
display(n1);
return 0;
}