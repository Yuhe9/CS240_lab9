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
        cerr << error.what() << endl;
    }
    cout << "[Expected: the list is empty]" << endl;


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
    cout << "[Expected: the index is out of range]" << endl;
    
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
    cout << "[Expected: the index is out of range]" << endl << endl;

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
    cout << "[Expected: the list is empty]" << endl;    
   
//testing size method
    cout << "*****************************************" << endl;
    cout << " testing size method" << endl;
    cout << "*****************************************" << endl;
    cout << "size for llist2: " << llist2.size() << " [Expected: 0]"<< endl;
    
    cout << "add 3 elements 1 2 3 into llist2" << endl;
    llist2.add(2);
    llist2.add(3);
    llist2.add(4);
    cout << "size for llist2: " << llist2.size() << " [Expected: 3]"<< endl;

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



    return 0;
}
