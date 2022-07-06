#include <iostream>
using namespace std;
int main()
{
    int A[6] = {2, 5, 4, 3, 7, 8};
    int *p = A;
    for (int i = 0; i < 6; i++)
    {
        cout << i[p];
        // p[i]
    }
    return 0;
}