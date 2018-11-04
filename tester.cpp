#include <iostream>
#include "LinkedList.h"

using namespace std;

int main(){
    //testing LinkedList implementation
    cout << "*****************************************" << endl;
    cout << "Testing LinkedList" << endl;
    cout << "*****************************************" << endl;

    //testing constructors
    cout << "*****************************************" << endl;
    cout << "Constructors" << endl;
    cout << "*****************************************" << endl;

    cout << "Default constructor:" << endl;
    cout << "LinkedList<int> llist1" << endl;
    LinkedList<int> llist1;

    cout << endl << "Copy constructor:" << endl;
    cout << "LinkedList<int> llist2(&llist1)" << endl;
    LinkedList<int> llist2(llist1);

    //testing getter method for empty list
    cout << "*****************************************" << endl;
    cout << "Testing get method for empty list" << endl;
    cout << "*****************************************" << endl;
    cout << "llist1.get(3)" << endl;
    try{
        llist1.get(3);   
    }
    catch(const exception& error){
        cerr <<  error.what() << endl;
    }
    cout << "[Expected: invalid attemp to retrieve from empty list]" << endl << endl;


    //testing setter method
    cout << "*****************************************" << endl;
    cout << "Testing add method" << endl;
    cout << "*****************************************" << endl;
    cout << "llist1.add(1)" << endl;
    cout << "llist1.add(2)" << endl;
    cout << "llist1.add(3)" << endl;
    llist1.add(1);
    llist1.add(2);
    llist1.add(3);

    
    //testing getter method
    cout << "*****************************************" << endl;
    cout << "Testing get method" << endl;
    cout << "*****************************************" << endl;
    cout << "At index 0 : " << llist1.get(0) << "[Expected: 1]" << endl;
    cout << "At index 1 : " << llist1.get(1) << "[Expected: 2]" << endl;
    cout << "At index 2 : " << llist1.get(2) << "[Expected: 3]" << endl << endl;
    //testing for invalid argument
    cout << "Testing error handling" << endl;
    cout << "llist1.get(5)" << endl;
    try{
        llist1.get(5);
    }
    catch (const exception& error){
        cerr << error.what() << endl;
  }
    cout << "[Expected: invalid index: 5  list size: 3]" << endl;
    
    cout << "llist1.get(-1)" << endl;
    try{
        llist1.get(-1);
    }
    catch (const exception& error){
        cerr << error.what() << endl;
    }
    cout << "[Expected: invalid index: -1  list size: 3]" << endl;

    //testing remove method
    cout << "*****************************************" << endl;
    cout << "Testing remove method" << endl;
    cout << "*****************************************" << endl;
    cout << "Testing error handling" << endl;
    cout << "llist1.remove(5)" << endl;
    try{
        llist1.remove(5);
    }
    catch (const exception& error){
        cerr << error.what() << endl;
  }
    cout << "[Expected: invalid index: 5  list size: 3]" << endl << endl;

    cout << "Remove the first element " << llist1.remove(0) << "[Expected: 1]" << endl;
    cout << "Now the size is  " << llist1.size() << "[Expected: 2]" << endl;

    cout << "Remove the second element " << llist1.remove(0) << "[Expected: 2]" << endl;
    cout << "Now the size is  " << llist1.size() << "[Expected: 1]" << endl;

    cout << "Remove the third element " << llist1.remove(0) << "[Expected: 3]" << endl;
    cout << "Now the size is  " << llist1.size() << "[Expected: 0]" << endl << endl;    

    cout << "Remove from an empty list" << endl;
    try{
        cout << "llist1.remove(0): " << llist1.remove(0) << endl;
    }
    catch (const exception& error){
        cerr << error.what() << endl;
    }
    cout << "[Expected: invalid attempt to retrieve from empty list]" << endl;    
   
//testing size method
    cout << "*****************************************" << endl;
    cout << " testing size method" << endl;
    cout << "*****************************************" << endl;
    cout << "size for llist2: " << llist2.size() << " [Expected: 0]"<< endl << endl;
    
    cout << "add 3 elements 1 2 3 into llist2" << endl;
    llist2.add(2);
    llist2.add(3);
    llist2.add(4);
    cout << "size for llist2: " << llist2.size() << " [Expected: 3]"<< endl << endl;

//Test toArray() 
    cout << "*****************************************" << endl;
    cout << "Test toArray() method" << endl;
    cout << "*****************************************" << endl;
    
    vector<int> v = llist2.toArray();
    cout << "vector<int> v = llist2.toArray():" << endl;
    cout << "v[0]: " << v[0] << "[Expected: 2]" << endl;
    cout << "v[1]: " << v[1] << "[Expected: 3]" << endl;
    cout << "v[2]: " << v[2] << "[Expected: 4]" << endl << endl;  
    
// test operator+=
    cout << "*****************************************" << endl;
    cout << "Test operator+=" << endl;
    cout << "*****************************************" << endl;
    cout << "Size of llist2 before += 3: " << llist2.size() << "[Expected: 3]" << endl;
    
    int a = 3;
    llist2 += 3;
    cout << "Size of llist2 after += 3: " << llist2.size() << "[Expected: 4]" << endl;

//test for char types
   cout << "*****************************************" << endl;
   cout << "Test for char type" << endl;
   cout << "*****************************************" << endl;
//testing constructors
   cout << "*****************************************" << endl;
   cout << "Constructors" << endl;
   cout << "*****************************************" << endl;

   cout << "Default constructor:" << endl;
   cout << "LinkedList<char> clist1" << endl;
   LinkedList<char> clist1;

   cout << endl << "Copy constructor:" << endl;
   cout << "LinkedList<char> clist2(&clist1)" << endl;
   LinkedList<char> clist2(clist1);

//Testing get method for empty char list
   cout << "*****************************************" << endl;
   cout << "Testing get method for empty list" << endl;
   cout << "*****************************************" << endl;
   cout << "clist1.get(3)" << endl;
   try{
       clist1.get(3);
   }
   catch(const exception& error){
       cerr << error.what() << endl;
   }
   cout << "[Expected: invalid attempt to retrieve from empty list]" << endl;

//testing setter method
   cout << "*****************************************" << endl;
   cout << "Testing add method" << endl;
   cout << "*****************************************" << endl;
   cout << "llist1.add('a')" << endl;
   cout << "llist1.add('b')" << endl;
   clist1.add('a');
   clist1.add('b');

//Testing getter method
   cout << "*****************************************" << endl;
   cout << "Testing get method" << endl;
   cout << "*****************************************" << endl;
   cout << "At index 0 : " << clist1.get(0) << "[Expected: a]" << endl;
   cout << "At index 1 : " << clist1.get(1) << "[Expected: b]" << endl;

//Testing error handling
   cout << "Testing error handling" << endl;
   cout << "clist1.get(5)" << endl;
   try{
       clist1.get(5);
   }
   catch (const exception& error){
       cerr << error.what() << endl;
   }
   cout << "[Expected: invalid indes: 5  list size: 2]" << endl;
   
//Testing remove method
   cout << "*****************************************" << endl;
   cout << "Testing remove method" << endl;
   cout << "*****************************************" << endl;
   cout << "Testing error handling" << endl;
   cout << "llist1.remove(5)" << endl;
   try{
       clist1.remove(5);
   }
   catch (const exception& error){
       cerr << error.what() << endl;
   }
   cout << "[Expected: invalid index: 5  list size: 2]" << endl << endl;

   cout << "Remove the first element " << clist1.remove(0) << "[Expected: a]" << endl;
   cout << "Now the size is  " << clist1.size() << "[Expected: 1]" << endl;

   cout << "Remove the second element " << clist1.remove(0) << "[Expected: b]" << endl;
   cout << "Now the size is  " << clist1.size() << "[Expected: 0]" << endl;

   cout << "Remove from an empty list" << endl;
    try{
        cout << "clist1.remove(0): " << clist1.remove(0) << endl;
    }
    catch (const exception& error){
        cerr << error.what() << endl;
    }
    cout << "[Expected: invalid attempt to retrieve from empty list]" << endl << endl;

// testing size method
   cout << "*****************************************" << endl;
    cout << " testing size method" << endl;
    cout << "*****************************************" << endl;
    cout << "size for clist2: " << clist2.size() << " [Expected: 0]"<< endl;

    cout << "add 3 elements c,d,e into llist2" << endl;
    clist2.add('c');
    clist2.add('d');
    clist2.add('e');
    cout << "size for clist2: " << clist2.size() << " [Expected: 3]"<< endl;

//Test toArray() method
   cout << "*****************************************" << endl;
    cout << "Test toArray() method" << endl;
    cout << "*****************************************" << endl;

    vector<char> c = clist2.toArray();
    cout << "vector<char> c = clist2.toArray():" << endl;
    cout << "c[0]: " << c[0] << "[Expected: c]" << endl;
    cout << "c[1]: " << c[1] << "[Expected: d]" << endl;
    cout << "c[2]: " << c[2] << "[Expected: e]" << endl << endl;

//Test operator+=
   cout << "*****************************************" << endl;
    cout << "Test operator+=" << endl;
    cout << "*****************************************" << endl;
    cout << "Size of clist2 before += f: " << clist2.size() << "[Expected: 3]" << endl;

    clist2 += 'f';
    cout << "Size of clist2 after += f: " << clist2.size() << "[Expected: 4]" << endl;

//testing for double type
    cout << "*****************************************" << endl;
    cout << "Testing LinkedList" << endl;
    cout << "*****************************************" << endl;

    //testing constructors
    cout << "*****************************************" << endl;
    cout << "Constructors" << endl;
    cout << "*****************************************" << endl;

    cout << "Default constructor:" << endl;
    cout << "LinkedList<double> llist1" << endl;
    LinkedList<double> dlist1;

    cout << endl << "Copy constructor:" << endl;
    cout << "LinkedList<double> llist2(&llist1)" << endl;
    LinkedList<double> dlist2(dlist1);

    //testing getter method for empty list
    cout << "*****************************************" << endl;
    cout << "Testing get method for empty list" << endl;
    cout << "*****************************************" << endl;
    cout << "llist1.get(3)" << endl;
    try{
        dlist1.get(3);   
    }
    catch(const exception& error){
        cerr << error.what() << endl;
    }
    cout << "[Expected: invalid attempt to retrieve from empty list]"<< endl;


    //testing setter method
    cout << "*****************************************" << endl;
    cout << "Testing add method" << endl;
    cout << "*****************************************" << endl;
    cout << "clist1.add(1.33)" << endl;
    cout << "clist1.add(2.65)" << endl;

    dlist1.add(1.33);
    dlist1.add(2.65);

    
    //testing getter method
    cout << "*****************************************" << endl;
    cout << "Testing get method" << endl;
    cout << "*****************************************" << endl;
    cout << "At index 0 : " << dlist1.get(0) << "[Expected: 1.33]" << endl;
    cout << "At index 1 : " << dlist1.get(1) << "[Expected: 2.65]" << endl;

    //testing for invalid argument
    cout << "Testing error handling" << endl;
    cout << "dlist1.get(5)" << endl;
    try{
        dlist1.get(5);
    }
    catch (const exception& error){
        cerr << error.what() << endl;
  }
    cout << "[Expected: invalid index: 5  list size: 2]" << endl;
    
    //testing remove method
    cout << "*****************************************" << endl;
    cout << "Testing remove method" << endl;
    cout << "*****************************************" << endl;
    cout << "Testing error handling" << endl;
    cout << "dlist1.remove(5)" << endl;
    try{
        dlist1.remove(5);
    }
    catch (const exception& error){
        cerr << error.what() << endl;
  }
    cout << "[Expected: invalid index: 5  list size: 2]" << endl << endl;

    cout << "Remove the first element " << dlist1.remove(0) << "[Expected: 1.33]" << endl;
    cout << "Now the size is  " << dlist1.size() << "[Expected: 1]" << endl;

    cout << "Remove the second element " << dlist1.remove(0) << "[Expected: 2.65]" << endl;
    cout << "Now the size is  " << dlist1.size() << "[Expected: 0]" << endl; 

    cout << "Remove from an empty list" << endl;
    try{
        cout << "dlist1.remove(0): " << dlist1.remove(0) << endl;
    }
    catch (const exception& error){
        cerr << error.what() << endl;
    }
    cout << "[Expected: invalid attempt to retrieve from empty list" << endl;    
   
//testing size method
    cout << "*****************************************" << endl;
    cout << " testing size method" << endl;
    cout << "*****************************************" << endl;
    cout << "size for dlist2: " << dlist2.size() << " [Expected: 0]"<< endl << endl;
    
    cout << "add 3 elements 1 2 3 into llist2" << endl;
    dlist2.add(2.11);
    dlist2.add(3.000);
    dlist2.add(4.5);
    cout << "size for dlist2: " << dlist2.size() << " [Expected: 3]"<< endl << endl;

//Test toArray() 
    cout << "*****************************************" << endl;
    cout << "Test toArray() method" << endl;
    cout << "*****************************************" << endl;
    
    vector<double> d = dlist2.toArray();
    cout << "vector<double> d = dlist2.toArray():" << endl;
    cout << "d[0]: " << d[0] << "[Expected: 2.11]" << endl;
    cout << "d[1]: " << d[1] << "[Expected: 3]" << endl;
    cout << "d[2]: " << d[2] << "[Expected: 4.5]" << endl << endl;  
    
// test operator+=
    cout << "*****************************************" << endl;
    cout << "Test operator+=" << endl;
    cout << "*****************************************" << endl;
    cout << "Size of dlist2 before += 3.143: " << dlist2.size() << "[Expected: 3]" << endl;
    

    dlist2 += 3.143;
    cout << "Size of dlist2 after += 3.143: " << dlist2.size() << "[Expected: 4]" << endl;

 return 0;

}
