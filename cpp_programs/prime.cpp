#include <iostream>
using namespace std;
int main()
{
    int a, count = 0;
    cout << "enter the number = ";
    cin >> a;

    for (int i = 1; i <= 9; i++)
    {
        if (a % i == 0)
        {
            count++;
        }
    }
    if (count > 2)
        cout << "the number is not prime number";
    else
        cout << "the number is prime number ";
    return 0;
}