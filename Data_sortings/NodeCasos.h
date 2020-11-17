//
// Created by Folkius on 23/9/2020.
//

#ifndef PROGRAMACION3_NODE_H
#define PROGRAMACION3_NODE_H

template <class T> class Node {
  T data;
  Node<T> *next;

public:
  Node(T data, Node<T> *next) : data(data), next(next) {}
  Node(){next = nullptr;}

  T& getData() { return data; }
  Node<T> *getNext() const { return next; }
  void setData(T data) { Node::data = data; }
  void setNext(Node<T> *next) { Node::next = next; }
};

#endif // PROGRAMACION3_NODE_H
