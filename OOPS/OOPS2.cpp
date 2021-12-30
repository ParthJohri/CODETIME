#include <bits/stdc++.h>
using namespace std;
class Rectangle
{
public:
    int length;
    int breadth;
    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {
        return 2 * (length + breadth);
    }
};
int main()
{
    Rectangle r1; // r1 variable name Object created in Stack Memory
    r1.length = 10;
    r1.breadth = 15;
    cout << "Area of Rectangle of object r1 is : " << r1.area() << endl;           // Area of Rectangle of object r1 is : 150
    cout << "Perimeter of Rectangle of object r1 is : " << r1.perimeter() << endl; // Perimeter of Rectangle of object r1 is : 50
    Rectangle *ptr;                                                                // Pointer ptr
    ptr = &r1;                                                                     // ptr is pointing to r1
    ptr->length = 7;
    ptr->breadth = 9;
    cout << "Area of rectangle of object r1 created by pointer ptr is " << ptr->area() << endl;           // Area of rectangle of object r1 created by pointer ptr is 63
    cout << "Perimeter of rectangle of object r1 created by pointer ptr is " << ptr->perimeter() << endl; // Perimeter of rectangle of object r1 created by pointer ptr is 32
    Rectangle *p;                                                                                         // Rectangle type pointer for Heap allocation
    p = new Rectangle();                                                                                  /* Nameless Object created in Heap Memory using new allocation operator,
                                                                                     which is pointed by pointer p*/
    p->length = 20;                                                                                       // -> is used to access the member of the class
    p->breadth = 30;                                                                                      // -> caps or arrows operator
    cout << "Area of rectangle of object created by pointer p is " << p->area() << endl;                  // Area of rectangle of object created by pointer p is 600
    cout << "Perimeter of rectangle of object created by pointer p is " << p->perimeter() << endl;        // Perimeter of rectangle of object created by pointer p is 100
    return 0;
}
