#include <iostream>
using namespace std;
class meeta
{
public:
    int x;
    void fun()
    {
        cout << x << endl;
    }
};

class tarang : public meeta
{
public:
    int y;
    void fun1()
    {
        cout << x << "  " << y;
    }
};

int main()
{
    meeta m;

    m.x = 12;
    m.fun();
    tarang t;
    t.x = 10;
    t.y = 5;
    t.fun1();
    return 0;
}