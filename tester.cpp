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
    LinkedList<int> llist1();

    cout << endl << "Copy constructor:" << endl;
    cout << "LinkedList<int> llist2(llist1)" << endl;
    LinkedList<int> llist2(llist1);

    //testing setter method


    //testing size method
    cout << "*****************************************" << endl;
    cout << " testing size method" << endl;
    cout << "*****************************************" << endl;

    cout << "llist1.size()" << endl;
    cout << "size: " << llist1.size() << " [Expected: ]"<< endl;
   
    return 0;
}
