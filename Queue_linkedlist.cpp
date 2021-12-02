#include <iostream>
using namespace std;

struct queue {
  int data;
  struct queue *next;
} *front = NULL, *rear = NULL;

void enqueue(int val) {
  queue *newNode = new queue;
  newNode->data = val;
  if(front == NULL) {
    front = rear = newNode;
  }
  else {
    rear -> next = newNode;
    rear = newNode;
  }
  rear = newNode;
}

void dequeue() {
  if(front == NULL)
    cout << "Queue is empty!" << endl;
  else {
    cout << "Item dequeued: " << front->data << endl;
    front = front->next;
  }
}

void display() {
  if(front == NULL)
    cout << "Queue is empty!" << endl;
  else {
    queue *temp = front;
    while(temp != rear) {
    cout << temp->data << "\t";
    temp = temp->next;
    }
    cout << temp->data << endl;
  }
}

int main()
{ cout << "Contents in the queue are: " << endl;
  enqueue(100);
  enqueue(200);
  enqueue(300);
  enqueue(400);
  display();
  cout << "After dequeuing: " << endl;
  dequeue();
  dequeue();
  display();
  return 0;
}