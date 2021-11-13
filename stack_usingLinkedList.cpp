#include<iostream>
using namespace std;

struct node 
{
  
int data;
   
struct node *next;
 
};

void
printlinkedlist (struct node *ptr) 
{
  
while (ptr != NULL)
    
    {
      
cout << ptr->data << endl;
      
ptr = ptr->next;
    
 
}

}


struct node *
insert (struct node *first, int data) 
{
  
struct node *ptr = new node;
  
ptr->next = first;
  
ptr->data = data;
  
return ptr;

}


int
main () 
{
  
struct node *first, *second, *third, *fourth, *fifth;
  
first = new node;
  
second = new node;
  
third = new node;
  
fourth = new node;
  
fifth = new node;
  
 
first->data = 20;
  
first->next = second;
  
 
second->data = 11;
  
second->next = third;
  
third->data = 33;
  
third->next = fourth;
  
fourth->data = 66;
  
fourth->next = fifth;
  
fifth->data = 99;
  
fifth->next = NULL;
  
cout << "FIRST==>";
  
//to print the elements of linked list
    printlinkedlist (first);
  
first = insert (first, 30);
  
cout << "after inserting an element at the first position" << endl;
  
printlinkedlist (first);
  
//cout<<"NULL";
    return 0;

}