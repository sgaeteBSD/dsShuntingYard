#include <iostream>
#include <cstring>
#include "node.h"

using namespace std;

Node::Node(char newData) {
  // constructor
  data = newData;
  next = NULL; // setting next to null
}
Node::~Node(){
  // destructor
  next = NULL;
}
Node* Node::getNext() {
  return next;
  // return the next variable when going to the next node.
}
int Node::getData() {
  return data;
}
void Node::setNext(Node* nextNode) {
  next = nextNode;
}
void Node::setData(char newData) {
  value = newVal;
}
