#include <iostream>
using namespace std;

main() 
{
    //PART A
    int myInt = 15;
    int *myPointer; 
    myPointer= &myInt; //assigns pointer variable to location of myInt
    //PART B
    cout << "Memory location of myInt = " << &myInt << endl;
    cout << "Value of myPointer = " << myPointer << endl;
    cout << "Value of myInt = " << myInt << endl;
    cout << "Value pointed to by myPointer = " << *myPointer << endl;
    //PART C
    myInt = 10;
    cout << "Memory Location of myInt = " << &myInt << endl;
    cout << "Value of myPointer = " << myPointer << endl;
    cout << "Value of myInt = " << myInt << endl;
    cout << "Value pointed to by myPointer = " << *myPointer << endl;
}
