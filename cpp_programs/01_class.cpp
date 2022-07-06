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
    rectangle r1, r2;
    r1.length = 10;
    // r1.breadth = 10;
    cout << "enetr";
    cin >> r1.breadth;
    r2.length = 20;
    r2.breadth = 20;

    cout << "Area of the rectangle 'r1' is =  " << r1.area() << "cm^2" << endl;
    cout << "perimeter of the rectangle 'r1' is = " << r1.perimeter() << "cm" << endl;

    cout << "Area of the rectangle 'r2' is =  " << r2.area() << "cm^2" << endl;
    cout << "perimeter of the rectangle 'r2' is = " << r2.perimeter() << "cm" << endl;

    return 0;
}