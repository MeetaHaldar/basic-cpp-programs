#include <iostream>
using namespace std;
int main()
{
    int A[3] = {2, 5, 7};
    int *p = A;
    cout << *p << endl;
    p++;
    cout << *p;
    return 0;
}