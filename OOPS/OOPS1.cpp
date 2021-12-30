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
    Rectangle r1;
    r1.length = 10;
    r1.breadth = 15;
    cout << r1.area() << endl;
    return 0;
}
