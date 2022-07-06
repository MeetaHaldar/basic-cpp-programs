#include <iostream>
using namespace std;
int main()
{
    int a[5] = {5, 7, 3, 4, 6};
    int *p = a;
    int *q = &a[3];
    cout << q - p;
    // cout << p << endl;
    // cout << q;
    return 0;
}