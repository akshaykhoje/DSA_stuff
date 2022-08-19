#include<iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

class Queue
{
    Node *head;
    Node *tail;
    Node *prev;
    Node *nn;
    bool isEmpty()
    {
        return head == NULL;
    }
public:
    Queue()
    {
        head = NULL;
        tail = NULL;
    }

    void enqueue(int x)
    {
        nn = new Node;
        nn->data = x;
        nn->next = NULL;
        if(isEmpty())
        {
            head = nn;
            tail = nn;
        }
        else
        {
            prev = tail;
            tail->next = nn;
            tail = nn;
        }
    }

    void dequeue()
    {
        nn = head;
        head = head->next;
        delete nn;
    }

    void display()
    {
        if(!isEmpty())
        {
            for(nn = head; nn != NULL; nn=nn->next)
                cout << nn->data << " ";
            cout << endl;
        }
        else
        {
            cout << "Queue is Empty!" << endl;
        }
    }
};

int main()
{
    Queue q;
    q.display();
    q.enqueue(15);
    q.display();
    q.enqueue(25);
    q.display();
    q.enqueue(35);
    q.display();
    q.enqueue(45);
    q.display();
    q.dequeue();
    q.display();
    q.dequeue();
    q.display();
    q.dequeue();
    q.display();
    return 0;
}