#ifndef _DOUBLYLINKEDLIST_H_
#define _DOUBLYLINKEDLIST_H_

#include <iostream>

using namespace std;

class DoublyLinkedList {
 private:
    struct Node {
      int data;
      Node *next;
      Node *prev;
    };

    Node *head;
    Node *tail;
  public:
    DoublyLinkedList();
    ~DoublyLinkedList();

    int Front();
    bool Empty();
    void PushFront(int);
    void PopFront();
    void PushBack(int);
    void PopBack();
    int Size();
    void Print();
};
#endif