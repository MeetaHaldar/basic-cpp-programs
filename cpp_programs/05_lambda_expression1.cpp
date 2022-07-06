#include <iostream>
using namespace std;
int main()
{
    int a = 9;
    int b = 7;
    // [a, b]() { cout << a << "  " << b; }();
    // [&a, &b]() { cout << a++ << "  " << ++b; }();
    [&]() { cout << a++ << "  " << ++b; }();
}