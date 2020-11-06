#ifndef U04_COLAS_COLA_COLA_H_
#define U04_COLAS_COLA_COLA_H_

#include "Node.h"

/**
 * Clase que implementa una Queue generica, ya que puede
 * almacenar cualquier tipo de dato T
 * @tparam T cualquier tipo de dato
 */
template <class T> class Queue {
private:
  Node<T> *front;
  Node<T> *back;

public:
  Queue();

  ~Queue();

  void enqueue(T data);

  T dequeue();

  bool isEmpty();

  T getFront();

};

/**
 * Constructor de la clase Queue
 * @tparam T
 */
template <class T> Queue<T>::Queue() { front = back = nullptr; }

/**
 * Destructor de la clase Queue, se encarga de liberar la memoria de todos los
 * nodos utilizados en la Queue
 * @tparam T
 */
template <class T> Queue<T>::~Queue() {}

/**
 * Inserta un data en la Queue
 * @tparam T
 * @param data  data a insert
 */
template <class T> void Queue<T>::enqueue(T data) {
  auto *aux = new Node<T>(data, nullptr);
  if(back!=nullptr) { // si no esta vacía
    back->setNext(aux);
  }else
    front = aux;

    back = aux;


}

/**
 * Obtener el dato de la Queue
 * @tparam T
 * @return dato almacenado en el nodo
 */
template <class T> T Queue<T>::dequeue() {
  if (front == nullptr)
    throw 404;
  T data = front->getData();
  Node<T> *toDelete = front;
  front = front->getNext();
  delete toDelete;
  if (front == nullptr)
    back = front;
  return data;
}

/**
 * Responde si la Queue se encuentra Vacía
 * @tparam T
 * @return
 */
template <class T> bool Queue<T>::isEmpty() { return front == nullptr}

#endif // U04_COLAS_COLA_COLA_H_
