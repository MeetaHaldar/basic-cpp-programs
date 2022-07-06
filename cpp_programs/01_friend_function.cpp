#include <iostream>
using namespace std;
class meeta
{
private:
    int a;

protected:
    int b;

public:
    int c;

    friend void fun();
};
void fun()
{
    meeta m;
    m.a = 4;
    m.b = 6;
    m.c = 8;
    cout << m.a;
}
int main()
{

    fun();
    return 0;
}