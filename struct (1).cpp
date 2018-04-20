#include <iostream>
#include <cmath>

using namespace std;

struct Point {
    float x;
    float y;
    
};

float calculateDistance(Point *a, Point *b) {
    
    float x1 = a->x;
    float y1 = a->y;
    float x2 = b->x;
    float y2 = b->y;
    
    
    return sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));

}

int main()
{
    Point p1;
    cout << "Enter x coordinate for p1: " << endl;
    cin >> p1.x;
    cout << "Enter y coordinate for p1: " << endl;
    cin >> p1.y;
    
    
    Point p2;
    cout << "Enter x coordinate for p2: " << endl;
    cin >> p2.x;
    cout << "Enter y coordinate for p2: " << endl;
    cin >> p2.y;
    
   cout << "Distance between two points is: " << calculateDistance(&p1,&p2) <<endl;
    
    return 0;
}