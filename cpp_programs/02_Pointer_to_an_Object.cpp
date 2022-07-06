#include <iostream>
using namespace std;

class rectangle
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
    rectangle r1;
    rectangle *p;
    p = &r1;
    p->length = 10;
    cout << "enter";
    cin >> p->breadth;
    // p->breadth = 10;

    cout << " area is = " << p->area() << endl;
    cout << "perimeter is= " << p->perimeter();
    return 0;
}
