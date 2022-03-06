/********************************************/
/* Implementation of design patterns in C++ */
/* copyright by Krzysztof Siminski          */
/********************************************/

#ifndef LIST_H
#define LIST_H



template<class T>
class list
{
  struct item
   {
       T _value;
       item * pNext;
   };
   
   item * pHead;
   
   void copy(const list::item * pS, list::item *& pD);
   
   
public:
    struct iterator
    {
        item * p;
        
    public:
        iterator (const item & it);
        iterator (item * p);
        iterator& operator++ ();
        iterator& operator++ (int);
        bool operator!= (const iterator & p);
        T & operator * ();
    };
    
   iterator begin();
   iterator end();
   
   

 public:
   list ();
   list (const list & orig);
   list (list && orig);
   list & operator= (const list & orig);
   list & operator= (list && orig);
   virtual ~list ();
   
   void push_front (const T & value);
   
   const T  pop_front (); 
   
   unsigned long int size() const ;
   
   
   
};

template<class T>
list<T>::list ()
{
    pHead = nullptr;
}

template<class T>
list<T>::~list ()
{
   // delete what is to delete
   while (pHead)
   {
      auto p = pHead->pNext;
      delete pHead;
      pHead = p;
   }
}

template<class T>
void list<T>::copy(const list::item * pS, list::item *& pD)
{
    if (pS)
    {
        copy (pS->pNext, pD);
        pD = new list::item { pS->_value, pD};
    }
}

template<class T>
list<T>::list (const list & orig)
{
   // copy what is to copy
    if (orig.pHead)
    {
        copy(orig.pHead, pHead);
    }

}

template<class T>
list<T> & list<T>::operator= (const list & orig)
{
   if (this == & orig)
      return *this;


   // remove what is to remove
   while (pHead)
   {
      auto p = pHead->pNext;
      delete pHead;
      pHead = p;
   }

   // allocate what is to allocate
   if (orig.pHead)
   {
       copy(orig.pHead, pHead);
   }
   
   return *this;
}

template<class T>
list<T>::list (list && orig)
{
    // swap what is to swap
    std::swap(orig.pHead, pHead);
}

template<class T>
list<T> & list<T>::operator= (list && orig)
{
   if (this == & orig)
      return *this;


   // swap what is to swap
   std::swap(orig.pHead, pHead);

   return *this;
}

template<class T>
void list<T>::push_front(const T & value)
{
    pHead = new item { value, pHead };
}

template<class T>
unsigned long int list<T>::size() const
{
    unsigned long int _size = 0;
    auto p = pHead;
    while (p)
    {
        _size++;
        p = p->pNext;
    }
    return _size;
}

template<class T>
const T list<T>::pop_front()
{
    if (pHead)
    {
        T v = pHead->_value;
        auto p = pHead; 
        pHead = pHead->pNext;
        delete p;
        return v;
    }
    else 
        return T{};
}

template<class T>
list<T>::iterator::iterator(const list::item& it)
{
    p = it.pNext;
}

template<class T>
list<T>::iterator::iterator(list::item* q)
{
    p = q;
}

template<class T>
bool list<T>::iterator::operator!=(const list::iterator& iter)
{
    return p != iter.p;
}

template<class T>
typename list<T>::iterator list<T>::begin()
{
    return iterator { pHead };
}

template<class T>
typename list<T>::iterator list<T>::end()
{
    return nullptr;
}

template<class T>
T & list<T>::iterator::operator*()
{
    return p->_value;
}

template<class T>
typename list<T>::iterator & list<T>::iterator::operator++()
{
    if (p)
       p = p->pNext;
    return *this;
}

template<class T>
typename list<T>::iterator & list<T>::iterator::operator++(int)
{
    return this->operator++();
}



#endif
