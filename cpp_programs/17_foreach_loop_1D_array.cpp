#include <iostream>
using namespace std;
int main()
{
    int A[2];
    for (auto &x : A)
    {
        cout << " enter your number = ";
        cin >> x;
    }

    for (auto &x : A)
    {
        cout << x << " ";
    }
    return 0;
}