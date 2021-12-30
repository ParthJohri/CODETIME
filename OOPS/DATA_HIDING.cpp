#include <bits/stdc++.h>
using namespace std;
class Rectangle
{
private:
    int length;
    int breadth;

public:
    int getLength() // Accessor Method
    {
        return length;
    }
    int getBreadth() // Accessor Method
    {
        return breadth;
    }
    void setLength(int l) // Mutator Method (Setter Method) also used for validation purpose
    {
        length = l < 0 ? abs(l) : l;
    }
    void setBreadth(int b) // Mutator Method
    {
        breadth = b < 0 ? abs(b) : b;
    }

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
    r1.setLength(10);
    r1.setBreadth(15);
    cout << "Length of Rectangle of object r1 is : " << r1.getLength() << endl;
    cout << "Breadth of Rectangle of object r1 is : " << r1.getBreadth() << endl;
    cout << "Area of Rectangle of object r1 is : " << r1.area() << endl;           // Area of Rectangle of object r1 is : 150
    cout << "Perimeter of Rectangle of object r1 is : " << r1.perimeter() << endl; // Perimeter of Rectangle of object r1 is : 50
    return 0;
}
