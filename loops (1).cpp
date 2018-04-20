#include <iostream>
using namespace std;

   int main()
{
    int positiveNums;
    int negativeNums;
    int numZeros;
    int sum;
    int averageVal;
    
    for (int i = 0; i < 10; i++) {
        int a;
       cout << "Enter a number: \n"; 
       cin >> a;
       sum+=a;
       
    if (a == 0) {
        numZeros++;
    }
    
    if (a > 0) {
        positiveNums++;
        
    }
    
    if (a < 0) {
        negativeNums++;
    }
    
    } //end of for loop 

    cout << "The average value of all integers is: " << averageVal << endl;
    cout << "The sum of all of the integers is: " << sum << endl;
    cout << "The number of zeros is: " << numZeros << endl;
    cout << "The number of negative numbers is: " << negativeNums << endl;
    cout << "The number of positive numbers is: " << positiveNums << endl;

    return 0;
}