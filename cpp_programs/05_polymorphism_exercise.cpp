#include <iostream>
using namespace std;
class shape
{
public:
    virtual float area() = 0;
    virtual float perimeter() = 0;
};

class rectangle : public shape
{
private:
    int length;
    int breadth;

public:
    rectangle(int l = 0, int b = 0)
    {
        length = l;
        breadth = b;
    }

    float area()
    {
        return length * breadth;
    }

    float perimeter()
    {
        return (2) * (length + breadth);
    }
};

class circle : public shape
{
private:
    int radius;

public:
    circle(int r = 0)
    {
        radius = r;
    }
    float area()
    {
        return (3.14) * radius * radius;
    }

    float perimeter()
    {
        return (2) * (3.24) * (radius);
    }
};

int main()
{
    rectangle r(10, 5);
    circle c(2);
    cout << " area of rectangle = " << r.area() << endl;
    cout << "area of circle = " << c.area() << endl;
    cout << "perimeter of circle = " << c.perimeter() << endl;
    cout << "perimeter of rectangle = " << r.perimeter();
    return 0;
}