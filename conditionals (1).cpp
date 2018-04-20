#include <iostream>
using namespace std;

int main()
{
    int grade;
    cout << "Enter test score" ;
    cin >> grade;
    
    if (grade >=90 && grade <=100) {
        cout << "A" << endl;
    }  
    
    if (grade >=80 && grade <=89) {
        cout << "B" << endl;
    }
    
    if (grade >=70 && grade <=79) {
        cout << "C" << endl;
    }
    
    if (grade >=60 && grade <=69) {
        cout << "D" << endl;
    }
    
    if (grade <60) {
        cout << "F" << endl;
    }
    
  
    
    return 0;
}