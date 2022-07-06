#include <iostream>
using namespace std;
int main()
{
    int n, a[5] = {2, 4, 5, 7, 8};
    cout << "enter the element number = ";
    cin >> n;
    for (int i = 0; i < 5; i++)
    {
        if (n == a[i])
        {
            cout << i;
        }
    }
    return 0;
}