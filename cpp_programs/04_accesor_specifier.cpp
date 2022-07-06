#include <iostream>
using namespace std;
class parent
{
private:
    int a;

protected:
    int b;

public:
    int c;

    void fun()
    {
        a = 10;
        b = 30;
        c = 45;
    }
};

class child : public parent
{
public:
    void fun()
    {
        // a = 1;
        b = 4;
        c = 5;
        cout << b;
    }
};
class grandchild : public child
{
public:
    void fun()
    {
        // a = 2;
        b = 6;
        c = 4;
    }
};

int main()
{
    child c;
    c.fun();
    return 0;
}