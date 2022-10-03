#include <iostream>
using namespace std;

template <typename N>
class Node
{
public:
    N val;
    Node *next;
    Node *prev;
    Node(N val)
    {
        this->val = val;
        next = NULL;
        prev = NULL;
    }
};

template <typename S>
class Stack
{
public:
    Node<S> *head;
    Node<S> *top;
    int count = 0;
    Stack()
    {
        head = NULL;
        top = NULL;
    }
    // push
    void push(S val)
    {
        Node<S> *newNode = new Node<S>(val);

        if (head == NULL)
        {
            head = top = newNode;
            count++;
            return;
        }

        top->next = newNode;
        newNode->prev = top;
        top = newNode;
        count++;
    }
    //pop
    S pop(){
        Node <S> *delNode;
        delNode=top;
        if(delNode==head){
            head=top=NULL;
        }
        else{
            top = delNode->prev;
            top->next=NULL;
        }
        S chck = delNode->val;
        delete delNode;
        count--;
        return chck;
    }
    //empty
    bool empty(){
        if(head==NULL){
            return true;
        }
        else false;
    }
    int size(){
        return count;
    }
    S Top(){
        S chck;
        if(top==NULL){
            cout<<"There is no value"<<endl;
        }
       chck =top->val;
       return chck;
    }
};