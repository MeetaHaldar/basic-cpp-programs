#include <iostream>
using namespace std;
class myexception : exception
{
};
int division(int x, int y) throw(myexception)
{
    if (y == 0)
        throw myexception();
    return x / y;
}
int main()
{
    int a = 10, b = 0, c;
    try
    {
        c = division(a, b);
        cout << c;
    }

    catch (myexception e)
    {
        cout << " this is undefined .";
    }
}