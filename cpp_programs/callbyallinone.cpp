#include <iostream>
using namespace std;

// call by value
void fun(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}
// call by address
void fun1(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
// call by reference
void fun2(int &x, int &y)
{

    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main()
{
    int a = 10, b = 20;
    cout << "before applying call by value function" << endl
         << a << " = " << endl
         << b << " = " << endl;
    fun(a, b);
    cout << "after applying call by value function" << endl
         << a << " = " << endl
         << b << " = " << endl;

    cout << "before applying call by address function" << endl
         << a << " = " << endl
         << b << " = " << endl;
    fun1(&a, &b);
    cout << "after applying call by address function" << endl
         << a << " = " << endl
         << b << " = " << endl;

    cout << "before applying call by reference function" << endl
         << a << " = " << endl
         << b << " = " << endl;
    fun2(a, b);
    cout << "after applying call by reference function" << endl
         << a << " = " << endl
         << b << " = " << endl;

    return 0;
}