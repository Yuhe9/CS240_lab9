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
    this->theList = other.theList;
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
    if(theList.empty())
    {
	throw std::invalid_argument("the list is empty"); 
    }    

    if(index>=theList.size())
    {	
	throw std::invalid_argument("the index is out of range");
    }

    typename std::list<T>::const_iterator it = theList.begin(); 
    advance (it,index);
    return *it;
}

template <class T>
T LinkedList<T>::remove(int index)
{
    if(theList.empty())
    {
	throw std::invalid_argument("the list is empty");
    }

    if(index>=theList.size())
    {
	throw std::invalid_argument("the index is out of range");
    }
    typename std::list<T>::iterator it = theList.begin();
    advance(it, index); 
    T temp = this->get(index);
    this->theList.erase(it);
    return temp;

}

template <class T>
std::vector<T> LinkedList<T>::toArray() const
{
    std::vector<T> temp (this->theList.begin(),this->theList.end());
    return temp;

}

template <class T>
LinkedList<T>& LinkedList<T>::operator+=(const T& item)
{
    this->add(item);
    return *this;
}


#endif
