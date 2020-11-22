<<<<<<< HEAD

=======
>>>>>>> c8a104e65aeff0d6a2992f571860def903ce14df
#ifndef PROGRAMACION3_NODE_H
#define PROGRAMACION3_NODE_H

/**
 * Nodo de lista
 */

template <class T> class Node {
  T data;
  Node<T> *next;

public:
  Node(T data, Node<T> *next) : data(data), next(next) {}
  Node(){next = nullptr;}

  T& getData() { return data; } //referencia al original en vez de copia
  Node<T> *getNext() const { return next; }
  void setData(T data) { Node::data = data; }
  void setNext(Node<T> *next) { Node::next = next; }
};

#endif // PROGRAMACION3_NODE_H
