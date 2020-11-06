#ifndef U05_HASH_HASHMAP_HASHENTRY_H_
#define U05_HASH_HASHMAP_HASHENTRY_H_
template <class T, class K> class HashEntry {
private:
  K key;
  T dato;
public:
  HasEntry (K key, T dato) :key(key), dato(dato) {}

};

#endif // U05_HASH_HASHMAP_HASHENTRY_H_
