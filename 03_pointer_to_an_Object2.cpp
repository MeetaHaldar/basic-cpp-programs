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
    rectangle *p = new rectangle();

    p->length = 10;
    p->breadth = 10;

    cout << " area is = " << p->area() << endl;
    cout << "perimeter is= " << p->perimeter();
    return 0;
}
