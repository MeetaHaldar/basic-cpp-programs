#include <iostream>
using namespace std;
int main()
{
    int a, i = 1;
    cout << "enter the number = ";
    cin >> a;
    cout << " the factors are " << endl;
    for (int i = 1; i <= a; i++)
    {
        if (a % i == 0)
        {
            cout << i << endl;
        }
    }

    return 0;
}