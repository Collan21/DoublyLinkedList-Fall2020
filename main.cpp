#include <iostream>
#include "DoublyLinked.h"
using namespace std;

int main() {
  DoublyLinkedList dlist;
  
  cout << "Initial Size: " << dlist.Size() << endl
       << "Initial Empty Status: " << dlist.Empty() << endl << endl;

  cout << "Testing PushFront: \n"
       << "Updated List: ";
  dlist.PushFront(5);
  dlist.Print();
  cout << endl;

  cout << "Testing PushFront: \n"
       << "Updated List: ";
  dlist.PushFront(4);
  dlist.Print();
  cout << endl;

  cout << "Testing PushFront: \n"
       << "Updated List: ";
  dlist.PushFront(3);
  dlist.Print();
  cout << endl << endl;

  cout << "2nd Empty Status: " << dlist.Empty() << endl << endl;

  cout << "Testing Front:\nFront: " << dlist.Front() << endl;
  dlist.PopFront();
  cout << endl;

  cout << "Testing PopFront:\nUpdated List: ";
  dlist.Print(); 
  cout << endl << endl;

  cout << "Testing PushBack: \n"
       << "Updated List: ";
  dlist.PushBack(8);
  dlist.Print();
  cout << endl;

  cout << "Testing PushBack: \n"
       << "Updated List: ";
  dlist.PushBack(9);
  dlist.Print();
  cout << endl << endl;

  cout << "Testing PopBack:\nPopBack Updated List: "  ;
  dlist.PopBack();
  dlist.Print(); 
  cout << endl << endl;

  return 0;
}