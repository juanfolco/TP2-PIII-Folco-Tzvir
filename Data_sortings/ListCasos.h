#ifndef U02_LISTAS_LISTA_LISTA_H_
#define U02_LISTAS_LISTA_LISTA_H_
#include "Node.h"

/**
 * Clase que implementa una List Enlasada generica, ya que puede
 * almacenar cualquier tipo de dato T
 * @tparam T cualquier tipo de dato
 */
template <class T> class List {
private:
  unsigned int size;
  Node<T> *begin;
  Node<T> *getNode(unsigned int pos);
  Node<T> *actual;

public:
  List();

  List(const List<T> &li);

  ~List();

  bool isEmpty();

  unsigned int getSize();

  void insert(unsigned int pos, T data);

  void push_front(T data);

  void push_back(T data);

  void remove(unsigned int pos);

  T get(unsigned int pos);

  void replace(int pos, T data);

  void empty();

  unsigned int findIdx(T toFind);

  T find(T toFind);

  T operator[](int i) { return get(i);}

  void start() { actual = begin; }
  bool isEnd() { return actual == nullptr; }
  void next() { actual = actual->getNext(); }

  T get() {
    if (actual == nullptr)
      throw 404;
    return actual->getData();
  }

  List &operator++() {
    next();
    return *this;
  }
  void print();
};

/**
 * Constructor de la clase List
 * @tparam T
 */
template <class T> List<T>::List() {
  size = 0;
  begin = nullptr;
}

/**
 * Constructor por copia de la clase List
 * @tparam T
 * @param li
 */
template <class T> List<T>::List(const List<T> &li) {
    size=li.size;
  Node<T> *aux1,*aux2;
  if(li.size > 0)
  {
    /// apt al primer nodo de la lista externa
    aux1 = li.begin;
    if (li.begin == nullptr){
      begin == nullptr;
      return;
    }

    ///creó el primer nodo de la lista interna
    begin = new Node<T>(aux1->getData(),nullptr);

    ///apunto al primer nodo de la lista interna
    aux2 = begin;

    ///se avanza el apt de la lista externa
    aux1 = aux1->getNext();


    while (aux1 != nullptr)
    {
      ///crea el nodo correspondiente con la lista externa
      aux2->setNext(new Node<T>(aux1->getData(),nullptr));

      ///se avanza el apt de la lista interna
      aux2 = aux2->getNext();

      ///se avanza el apt de la lista externa
      aux1 = aux1->getNext();
      size++;
    }
    aux2->setNext(nullptr);
}}

/**
 * Destructor de la clase List, se encarga de liberar la memoria de todos los
 * nodos utilizados en la lista
 * @tparam T
 */
template <class T> List<T>::~List() {}

/**
 * Metodo para saber si la lista esta vacia
 * @tparam T
 * @return true si la lista esta vacia, sino false
 */
template <class T> bool List<T>::isEmpty() {
  return size == 0;
}

/**
 * Metodo para obtener la cantidad de nodos de la lista
 * @tparam T
 * @return la cantidad de nodos de la lista
 */
template <class T> unsigned int List<T>::getSize() { return size; }

/**
 * Inserta un nodo con el data en la posicion pos
 * @tparam T
 * @param pos lugar donde será insertado el data
 * @param data  data a insert
 */
template <class T> void List<T>::insert(unsigned int pos, T data) {
  if (pos == 0) {
    Node<T> *newNode = new Node<T>(data, begin);
    begin = newNode;
    size++;
    return;
  }
  Node<T> *aux = getNode(pos - 1);

  Node<T> *newNode = new Node<T>(data, aux->getNext());
  aux->setNext(newNode); // Modificado
  size++;
}

/**
 * Inserta un nodo con el data en la primera posicion
 * @tparam T
 * @param data data a insert
 */
template <class T> void List<T>::push_front(T data) {
  insert(0, data); }

/**
 * Inserta un nodo con el data en la ultima posicion
 * @tparam T
 * @param data data a insert
 */
template <class T> void List<T>::push_back(T data) { insert(size, data); }

/**
 * Elimina el nodo en la posicion 'pos' de la lista enlasada
 * @tparam T
 * @param pos posicion del nodo a eliminar
 */
template <class T> void List<T>::remove(unsigned int pos) {
  if(pos==0){
    Node<T> *toDelete = begin;
    begin = begin->getNext();
    delete toDelete;
    size--;
    return;
  }
  Node<T> *aux = getNode(pos-1);
  Node<T> *toDelete = aux->getNext();
  if (toDelete==nullptr)
    throw 404;
  aux->setNext(toDelete->getNext());
  delete toDelete;
  size--;
}

/**
 * Obtener el dato del nodo en la posicion pos
 * @tparam T
 * @param pos posicion del dato
 * @return dato almacenado en el nodo
 */
template <class T> T List<T>::get(unsigned int pos) {
  Node<T> *aux = getNode(pos);
  return aux->getData();
}
template <class T> Node<T> *List<T>::getNode(unsigned int pos) {
  Node<T> *aux = begin;
  unsigned int p = 0;

  if (pos >= size)
    throw 404;

  while (p < pos && aux != nullptr) {
    aux = aux->getNext();
    p++;
  }
  if (aux == nullptr)
    throw 404;

  return aux;
}

/**
 * Reemplaza el data almacenado en un nodo por este otro
 * @tparam T
 * @param pos posicion donde se desea replace
 * @param data nuevo data a almacenar
 */
template <class T> void List<T>::replace(int pos, T data) {}

/**
 * Función que vacia la lista enlazada
 * @tparam T
 */
template <class T> void List<T>::empty() {}

template <class T> unsigned int List<T>::findIdx(T toFind) {
  Node<T> *aux = begin;
  unsigned int p = 0;

  if (isEmpty())
    throw 404;

  while (aux->getData() != toFind && aux != nullptr) {
    aux = aux->getNext();
    p++;
  }

  if (aux == nullptr)
    throw 404;

  return p;
}
template <class T> T List<T>::find(T toFind) {
  Node<T> *aux = begin;
  unsigned int p = 0;

  if (isEmpty())
    throw 404;

  while (aux->getData() != toFind && aux != nullptr) {
    aux = aux->getNext();
    p++;
  }

  if (aux == nullptr)
    throw 404;

  return aux->getData();
}
template <class T> void List<T>::print() {
  Node<T> *aux = begin;
  while (aux != nullptr) {
    std::cout << aux->getData() << " -> ";
    std::cout << std::endl;
    aux = aux->getNext();
  }
  std::cout << " " << std::endl;
}

#endif // U02_LISTAS_LISTA_LISTA_H_
