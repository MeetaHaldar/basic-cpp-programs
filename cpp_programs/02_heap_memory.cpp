#include <iostream>
using namespace std;
int main()
{
    int *p;
    p = new int[10];
    p[0] = 1;
    p[3] = 6;
    cout << p[0];
    delete[] p;
    p = nullptr;

    return 0;
}