#include <iostream>
using namespace std;

 main()
{
    int arr[10];
    
    //array to print out values stored in array
    for (int i = 0; i < 10; i++) {
    cout << "Enter a number:" << endl;
    cin >> arr[i];
    }

    cout << "Reverse array: " << endl;
    
    for (int i=9; i >= 0; i--) {
    cout << arr[i] <<", ";
    }
    cout << endl;
    
    
    //print sorted array
    int sortArr[10];
    int temp;

    //place all values in new array
    for (int i = 0; i< 10; i++) {
        sortArr[i] = arr[i];
    }
    //sort the new array
    for (int i = 0; i < 10; i++) {
    for (int j=0; j <=10; j++) {
        if (sortArr[j] > sortArr[j+1]) {
            temp = sortArr[j];
            sortArr[j] = sortArr[j+1];
            sortArr[j+1] = temp;
        }
    }
    }
    cout << "Sorted Array: " << endl;
    for (int i =0; i <10; i++) {
        cout << sortArr[i] << " ";
    }
    
    cout << endl;
} 