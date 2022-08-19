/*
2. Implement queue
*/
//                 INCOMPLETE
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
  int data;
  Node *next;
};

class Queue
{
  Node *front, *rear, *prev, *nn;
  int size;

  int isEmpty()
  {
    return size == 0;
  }

public:
  Queue()
  {
    front = NULL;
    rear = NULL;
    size = 0;
  }

  int getSize()
  {
    return size;
  }

  void enQueue(int x)
  {
    Node *nn = new Node;
    nn->data = x;
    nn->next = NULL;
    if (isEmpty())
    {
      front = nn;
      rear = nn;
    }
    else
    {
      prev = rear;
      rear->next = nn;
      rear = nn;
    }
    return;
  }

  int deQueue()
  {
    if (isEmpty())
    {
      cout << "Queue is empty!\n";
      return 0;
    }
    int x = front->data;
    Node *temp = front;
    front = front->next;
    delete temp;
    return x;
  }

  // int peek()
  // {
  //   int x = front->data;
  //   return x;
  // }

  void display()
  {
    Node *temp = front;
    while (temp)
    {
      cout << temp->data << "  ";
      temp = temp->next;
    }
    cout << endl;
  }
};

int main()
{
  Queue q;
  q.enQueue(2);
  q.enQueue(4);
  // q.enQueue(6);
  q.display();
  cout << q.deQueue();
  return 0;
}