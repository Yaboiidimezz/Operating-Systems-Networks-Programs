#include <iostream>
using namespace std;

main() 
{
    int my_ints[4];
    int temp;

    for (int i=0; i < 4; i++) {
    cout << "Please enter a number" << endl;
    cin >> my_ints[i];
    }
    
    int my_ptrs[4];
    for (int i=0; i < 4; i++) {
    my_ptrs[i] = my_ints[i];
    }
    cout << "Initial state of my_ptrs[]: " << endl;
    for (int i = 0; i < 4; i++) {
        cout << my_ptrs[i] << "";
    }
    cout << endl;
    
    //sort pointers
    for (int i = 0; i < 3; i++) {
        for (int j = i+1; j < 4; j++) {
            if (my_ptrs[j] < my_ptrs[i]) {
                int temp = my_ptrs[i];
                my_ptrs[i] = my_ptrs[j];
                my_ptrs[j] = temp;
            }
        }
    }

     cout << "New state of my_ptrs[]: " << endl;
    for (int i = 0; i < 4; i++) {
        cout << my_ptrs[i] << "";
    }
    cout << endl;
}