#include <iostream>
#include <cstring>
#include "BTnode.h"

using namespace std;

Node::Node(char newData) {
  // constructor
  data = newData;
  left = NULL; // setting pointer to null
  right = NULL;
}
Node::~Node(){
  // destructor
  left = NULL;
  right = NULL;
}
Node* Node::getLeft() {
  return left;
}
Node* Node::getRight() {
  return right;
}
int Node::getData() {
  return data;
}
void Node::setLeft(Node* leftNode) {
  left = leftNode;
}
void Node::setRight(Node* rightNode) {
  right = rightNode;
}
void Node::setData(char newData) {
  data = newData;
}
