#ifndef U03_PILAS_PILA_STACK_H_
#define U03_PILAS_PILA_STACK_H_

#include "Node.h"
/**
 * Clase que implementa una Stack generica, ya que puede
 * almacenar cualquier tipo de dato T
 * @tparam T cualquier tipo de dato
 */
template <class T> class Stack {
private:
  Node<T> *top;

public:
      Stack();
  Stack(T data);
  Stack(const Stack<T> &st);
  ~Stack();

  void push(T data);

  T pop();

  T peek();

  bool isEmpty();
};

/**
 * Constructor de la clase Stack
 * @tparam T
 */
template <class T> Stack<T>::Stack(T data) {
  top = new Node<T>(data,nullptr);
}
/**
 * Constructor por copia de la clase Stack
 * @tparam T
 * @param st
 */
template <class T> Stack<T>::Stack(const Stack<T> &st) {
  Node<T> *aux1,*aux2;
    aux1 = st.top;
    top = new Node<T>(aux1->getData(),nullptr);

    aux2 = top;

    aux1 = aux1->getNext();


    while (aux1 != nullptr)
    {
      aux2->setNext(new Node<T>(aux1->getData(),nullptr));

      aux2 = aux2->getNext();

      aux1 = aux1->getNext();
    }
}

template <class T> Stack<T>::Stack() {top = nullptr;}

/**
 * Destructor de la clase List, se encarga de liberar la memoria de todos los
 * nodos utilizados en la lista
 * @tparam T
 */
template <class T> Stack<T>::~Stack() {
   while (!isEmpty())
     pop();
}

/**
 * Inserta un dato en la pila
 * @tparam T
 * @param dato  dato a insert
 */
template <class T> void Stack<T>::push(T data) {
  auto *aux= new Node<T>(data, top);
  //Node<T> *aux= new Node<T>;
//aux->setData(data);
//aux->setNext(top)
top=aux;

}

/**
 * Obtener el dato de la pila
 * @tparam T
 * @return dato almacenado en el nodo
 */
template <class T> T Stack<T>::pop() {
  if(top == nullptr) {
    throw 404;
  }
  T data=top->getData();
  Node<T> *toDelete=top;
  top=top->getNext();
   delete toDelete;
   return data;
}

/**
 * Responde si la pila se encuentra Vacía
 * @tparam T
 * @return
 */
template <class T> bool Stack<T>::isEmpty() {
  return (top == nullptr);
}
template <class T> T Stack<T>::peek() {
  if(top == nullptr) {
    throw 404;
  }
  T data=top->getData();
  return data;
}

#endif // U03_PILAS_PILA_STACK_H_
