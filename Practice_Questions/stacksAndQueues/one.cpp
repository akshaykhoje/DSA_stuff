#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
  int data;
  Node *next;

  Node(int data)
  {
    this->data = data;
    next = NULL;
  }
};

class Stack
{
  Node *head;
  int size;

public:
  Stack()
  {
    head = NULL;
    size = 0;
  }

  int getSize()
  {
    return size;
  }

  int isEmpty()
  {
    return size == 0;
  }

  void push(int element)
  {
    Node *nn = new Node(element);
    nn->next = head;
    head = nn;
    size++;
    return;
  }

  int pop()
  {
    int x = head->data;
    Node *temp = head;
    head = head->next;
    delete temp;
    size--;
    return x;
  }

  int top()
  {
    if (isEmpty())
      return -1;
    return head->data;
  }

  void display()
  {
    Node *temp = head;
    while (temp)
    {
      cout << temp->data << "  ";
      temp = temp->next;
    }
    cout << endl;
    return;
  }
};

int main()
{
  Stack st;
  cout<<"isEmpty: "<<st.isEmpty()<<endl;
  st.push(10);
  st.push(20);
  st.push(30);
  st.push(40);
  st.display();
  cout << "size: " << st.getSize() << endl;
  st.pop();
  st.display();
  cout<<"isEmpty: "<<st.isEmpty()<<endl;
  cout<<"top: "<<st.top()<<endl;
  return 0;
}