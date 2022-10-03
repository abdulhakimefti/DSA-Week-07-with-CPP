#include <bits/stdc++.h>
using namespace std;

template <typename N>
class Node
{
public:
    N data;
    Node *next;

    Node(N val)
    {
        data = val;
        next = NULL;
    }
};
template <typename Q>
class Queue
{
    public:
    Node<Q> *front;
    Node<Q> *rear;
    Queue()
    {
        front = NULL;
        rear = NULL;
    }
    // Enqueue ----> Push
    void push(Q val)
    {
        Node<Q> *newNode = new Node <Q> (val);
        if (front == NULL)
        {
            front = newNode;
            rear = newNode;
            return;
        }
        rear->next = newNode;
        rear = rear->next;
    }

    // Dequeue ----> Pop

    Q pop()
    {
        Q chk ;
        if (rear == NULL)
        {
            cout << "Queue Underflow" << endl;
            return chk;
        }

        Node<Q> *delNode;
        delNode = front;
        front = front->next;
        if (front == NULL)
        {
            rear = NULL;
        }
        chk = delNode->data;
        delete delNode;
        return chk;
    }
    // peek ---->front(),back()
    Q Front()
    {
        Q chk = front->data;
        return chk;
    }
    Q back()
    {
        Q chk = rear->data;
        return chk;
    }
    // empty ---->empty()
    bool empty()
    {
        if (front == NULL && rear == NULL)
        {
            return true;
        }
        else
            return false;
    }
};
