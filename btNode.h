#ifndef NODE_H
#define NODE_H

#include <iostream>
#include <cstring>

using namespace std;

class Node {
 public:
  Node(char newData);
  ~Node();

  Node* getLeft();
  Node* getRight();
  char getData();

  void setLeft(Node* leftNode);
  void setRight(Node* rightNode);
  void setData(char newData);
  
 private:
  char data;
  Node* left;
  Node* right;
};

#endif
