#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
	int data;
	struct node* next;
};
void printlist(struct node* n1){
  struct node *ptr=n1;
  cout<<"Element: "<<ptr->data<<"\n";
		ptr=ptr->next;
		
  while(ptr!=n1)
	{
		cout<<"Element: "<<ptr->data<<"\n";
		ptr=ptr->next;
	}
}
struct node * insertatfirst(struct node *n1,int data){
struct node *ptr = (struct node*)malloc(sizeof(struct node));
ptr->data=data;
struct node * p = n1->next;

}
int main()
{
struct node *n1,*n2,*n3,*n4,*n5;
n1=(struct node*)malloc(sizeof(struct node));
n2=(struct node*)malloc(sizeof(struct node));
n3=(struct node*)malloc(sizeof(struct node));
n4=(struct node*)malloc(sizeof(struct node));
n5=(struct node*)malloc(sizeof(struct node));

n1->data=5;  
n1->next=n2;

n2->data=4;
n2->next=n3;

n3->data=3;
n3->next=n4;

n4->data=2;
n4->next=n5;

n5->data=1;
n5->next=n1;

printlist(n1);
n1=insertatfirst(n1,60);
printlist(n1);
return 0;
}