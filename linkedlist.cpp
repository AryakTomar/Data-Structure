#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
	int data;
	struct node* link;
};
void printlist(struct node* ptr)
{
	while(ptr!=NULL)
	{
		cout<<"Element: "<<ptr->data<<"\n";
		ptr=ptr->link;
	}
}
int main()
{
struct node *n1,*n2,*n3,*n4,*n5;
//Allocate memory for nodes in the linked list in heap.
n1=(struct node*)malloc(sizeof(struct node));
n2=(struct node*)malloc(sizeof(struct node));
n3=(struct node*)malloc(sizeof(struct node));
n4=(struct node*)malloc(sizeof(struct node));
n5=(struct node*)malloc(sizeof(struct node));

n1->data=10;  
n1->link=n2;

n2->data=20;
n2->link=n3;

n3->data=30;
n3->link=n4;

n4->data=40;
n4->link=n5;

n5->data=50;
n5->link=NULL;

printlist(n1);
}