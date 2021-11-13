#include <iostream>
using namespace std;

//node structure
struct Node {
    int data;
    Node* next;
};

class LinkedList {
  private:
    Node* head;
  public:
    LinkedList(){
      head = NULL;
    }
 
    //Add new element at the end of the list
    void push_back(int newElement) {
      Node* newNode = new Node();
      newNode->data = newElement;
      newNode->next = NULL; 
      if(head == NULL) {
        head = newNode;
      } else {
        Node* temp = head;
        while(temp->next != NULL)
          temp = temp->next;
        temp->next = newNode;
      }    
    }

    //Delete first node of the list
    void pop_front() {
      if(head != NULL) {
        Node* temp = head;
        head = head->next; 
        free(temp); 
      }
    }

    //display the content of the list
    void PrintList() {
      Node* temp = head;
      if(temp != NULL) {
        cout<<"The list contains: ";
        while(temp != NULL) {
          cout<<temp->data<<" ";
          temp = temp->next;
        }
        cout<<endl;
      } else {
        cout<<"The list is empty.\n";
      }
    }    
};


int main() {
  LinkedList MyList;

  //Add four elements in the list.
  MyList.push_back(11);
  MyList.push_back(33);
  MyList.push_back(66);
  MyList.push_back(99);
  MyList.PrintList();
  
  //Delete the first node
  MyList.pop_front();
  MyList.PrintList();  
  return 0; 
}