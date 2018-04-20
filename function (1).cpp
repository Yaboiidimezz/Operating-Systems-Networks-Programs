#include <iostream>
using namespace std;


void swapInts(int *a, int *b) {
    
    int temp = *a;
    *a=*b;
    *b= temp;
}

int main()
{
    int num1 = 0, num2 =0;

cout << "Enter num1: ";
cin >> num1;
cout << "Enter num2: ";
cin >> num2;
swapInts(&num1, &num2);
cout << "After swaps: " << endl;
cout << num1 << num2 << endl;

    return 0;
}