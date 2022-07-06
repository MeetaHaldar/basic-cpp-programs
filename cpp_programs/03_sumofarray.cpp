#include <iostream>
using namespace std;
int main()
{
    int a[4] = {1, 2, 3, 4};
    int b = 0;
    for (int i = 0; i < 4; i++)
    {

        b += a[i];
    }
    cout << "the sum of array is = " << b;
    return 0;
}