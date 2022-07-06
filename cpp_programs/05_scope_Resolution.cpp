#include <iostream>
using namespace std;
class rectangle

{
private:
    int length;
    int breadth;

public:
    //constructor
    //non paremeterized constructor
    rectangle();

    //parameterized constructor
    rectangle(int l, int b);

    //copy constructor
    rectangle(rectangle &r);

    //accessors
    int getLength(int l)
    {
        return l;
    }
    int getBreadth(int b)
    {
        return b;
    }
    //mutator
    void setLength(int l);
    void setBreadth(int b);

    //functions
    int area();
    int perimeter();

    //enquiry function
    bool isSquare();
    //destructor
    ~rectangle();
};

rectangle::rectangle()
{
    length = 1;
    breadth = 1;
}

rectangle::rectangle(int l, int b)
{
    length = l;
    breadth = b;
}

rectangle::rectangle(rectangle &r)
{
    length = r.length;
    breadth = r.breadth;
}

void rectangle::setLength(int l)

{
    length = l;
}
void rectangle::setBreadth(int b)
{
    breadth = b;
}

int rectangle::area()
{
    return length * breadth;
}

int rectangle::perimeter()
{
    return 2 * (length + breadth);
}

bool rectangle::isSquare()
{
    return length == breadth;
}
rectangle::~rectangle()
{
    cout << "rectangle distroyed";
}

int main()
{
    rectangle r(10, 10);
    cout << r.area() << endl;
    if (r.isSquare())
        cout << "yes";

    return 0;
}
