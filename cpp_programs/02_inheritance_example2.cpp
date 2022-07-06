#include <iostream>
using namespace std;
class rectangle
{

private:
    int length;
    int breadth;

public:
    void setLength(int l)
    {
        length = l;
    }
    void setBreadth(int b)
    {
        breadth = b;
    }

    int getLength()
    {
        return length;
    }
    int getBreadth()
    {
        return breadth;
    }

    rectangle(int l = 0, int b = 0)
    {
        setLength(l);
        setBreadth(b);
    }

    int area()
    {
        return length * breadth;
    }
};

class cuboid : public rectangle
{
private:
    int height;

public:
    void setHeight(int h)
    {
        height = h;
    }

    int getHeight()
    {
        return height;
    }
    int volume(int l, int b, int h)
    {
        return getLength() * getBreadth() * getHeight();
    }
};

int main()
{
    rectangle r;
    r.setBreadth(10);
    r.setLength(10);

    cuboid c;
    c.setBreadth(3);
    c.setHeight(3);
    c.setLength(3);
    int p = c.volume(3, 3, 3);
    cout << p;
    int z = c.area();
    cout << "  " << z;

    return 0;
}