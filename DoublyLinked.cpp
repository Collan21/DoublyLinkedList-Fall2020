#include "DoublyLinked.h"

DoublyLinkedList::DoublyLinkedList() {
  head = nullptr;
  tail = nullptr;
}

DoublyLinkedList::~DoublyLinkedList() {
  Node *current = head;

  while (current) {
    Node* next = current->next;
      delete current;
      current = next;
  }
}

int DoublyLinkedList::Front() {
  return (head ? head->data : 0); // returns data in head else if head is null returns 0
}

bool DoublyLinkedList::Empty() {
  return !head;
}

void DoublyLinkedList::PushFront(int n) {
  Node *newNode = new Node;
  newNode->data = n;
  newNode -> next = nullptr;
  newNode -> prev = nullptr;

  if (Empty()) {
    head = newNode;
    tail = newNode;
  }
  else {
    newNode -> next = head;
    head -> prev = newNode;
    head = newNode;
  }
}

void DoublyLinkedList::PopFront() {
  if (head) {
    Node *popNode = head;
    head = head->next;
    delete popNode;
  }
}

void DoublyLinkedList::PushBack(int n) {
  Node *newNode = new Node;
  newNode -> data = n;
  newNode -> next = nullptr;

  if (Empty()) {
    head = newNode;
    tail = newNode;
  }
  else {
    tail -> next = newNode;
    newNode -> prev = tail;
    tail = newNode;
  }
}

void DoublyLinkedList::PopBack() {
  if(tail) {
    Node *oldNode = tail;
    tail = tail -> prev;
    if (tail) {
      tail->next = nullptr;
    }
    else {
      head = nullptr;
    }
    delete oldNode;
  }
}

int DoublyLinkedList::Size() {
  
  Node *current = head;
  int size = 0;
  while (current) {
    size++;
    current = current -> next;
  }  
  return size;
}

void DoublyLinkedList::Print() {
  Node *current = head;
  while (current != NULL) {
    printf("%d", current->data);
    printf(" ");
    current = current->next;
  }
}