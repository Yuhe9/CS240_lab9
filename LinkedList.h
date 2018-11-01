#ifndef __LINKEDLIST_H__
#define __LINKEDLIST_H__

#include <list>
#include <vector>
#include <stdexcept>

using namespace std;

template <class T>
class LinkedList
{
   private:
     std::list<T> theList;

   public:
     LinkedList();
     LinkedList(const LinkedList<T>& other);
     ~LinkedList();

     int  size() const;  // note: a const method
     void add(T element);

     T get(int index) const;  // note: a const method
     T remove(int index); 

     std::vector<T> toArray() const;  // note: a const method

     LinkedList<T>& operator+=( const T& item );
};

template <class T>
LinkedList<T>::LinkedList()
{
    std::list<T> theList;
}

template <class T>
LinkedList<T>::LinkedList(const LinkedList<T>& other)
{
    std::list<T> theList (other);
}

template <class T>
LinkedList<T>::~LinkedList(){}

template <class T>
int LinkedList<T>::size() const
{
   return theList.size();
}

template <class T>
void LinkedList<T>::add(T element)
{
    theList.push_back(element);
}

template <class T>
T LinkedList<T>::get(int index) const
{
    if(theList.size()==0)
    {
	throw std::invalid_argument("the list is empty"); 
    }    

    if(index>=theList.size())
    {	
	throw std::invalid_argument("the index is out of range");
    }

    typename std::list<T>::const_iterator it = theList.cbegin(); 
    advance (it,index);
    return *it;
}

template <class T>
T LinkedList<T>::remove(int index)
{
    if(theList.size()==0)
    {
	throw std::invalid_argument("the list is empty");
    }

    if(index>=theList.size())
    {
	throw std::invalid_argument("the index is out of range");
    }
    
    typename std::list<T>::const_iterator it = theList.cbegin();
    advance (it,index);
    T temp = *it;
    theList.erase(it);
    return temp;

}

template <class T>
std::vector<T> LinkedList<T>::toArray() const
{
    typename std::list<T>::const_iterator it = theList.cbegin();
    std::vector<T> temp (it.cbegin(), it.cend());
    return temp;

}

template <class T>
LinkedList<T>& LinkedList<T>::operator+=(const T& item)
{
    LinkedList<T> temp (*this);
    temp.add(item);
    return temp;
}


#endif
