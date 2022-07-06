#include <iostream>
using namespace std;
void arr(int c[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        cout << c[i] << endl;
    }
}

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    arr(a, 5);
    return 0;
}