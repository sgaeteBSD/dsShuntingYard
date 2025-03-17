#ifndef NODE_H
#define NODE_H

#include <iostream>
#include <cstring>

using namespace std;

class Node {
 public:
  Node(char newData);
  ~Node();

  Node* getNext();
  char getData();

  void setNext(Node* nextNode);
  void setData(char newData);
  
 private:
  char data;
  Node* next;
};

#endif
