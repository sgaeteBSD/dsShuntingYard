#include "node.h"
#include <iostream>
using namespace std;

class stack {
public:
  stack();
  ~stack();
  bool push(const char &data);
  bool pop(char &data);
  bool peek(char &data);
  bool isempty();
  bool isfull();
private:
  Node* head; //top of stack
};

stack::stack() {
  head = NULL;
}

stack::~stack() {
  while (isempty() == false) {
    char temp;
    pop(temp); //remove nodes
  }
}

bool stack::push(const char &data) {
  Node* newNode = new Node(data);
  newNode->setNext(head);
  return true;
}

bool stack::pop(char &data) {
  if (isempty() == true) {
    return false;
  }

  Node* temp = head;
  data = head->getData();
  head = head->getNext();
  delete temp;
  return true;
}

bool stack::peek(char &data) {
  if (isempty() == true) {
    return false;
  }

  data = head->getData();
  return true;
}

bool stack::isempty() {
  if (head == NULL) {
    return true;
  }
  return false;
}

bool stack::isfull() {
  return false; //edit here later
}

