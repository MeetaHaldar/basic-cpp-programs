#include <iostream>
using namespace std;
int main()
{

    // [](int x, int y) { cout << "the sum is = " << x + y; }(45, 7);
    // int a = [](int x, int y) { return x + y; }(45, 7);
    // cout << a;

    int a = [](int x, int y) -> int { return x + y; }(45, 7);
    cout << a;
}