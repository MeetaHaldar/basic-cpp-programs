#include <iostream>
using namespace std;
template <typename t>
void fun(t p)
{
    p();
}

int main()
{
    int a = 40;
    auto f = [&a]() { cout << a++ << endl; };
    fun(f);
    a++;
    f();
}