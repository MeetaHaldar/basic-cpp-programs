#include <iostream>
using namespace std;
int main()
{
    int A[10], sum = 0;
    for (int i = 0; i < 10; i++)
    {
        cout << "enter your element = ";
        cin >> A[i];
    }

    for (int i = 0; i < 10; i++)
    {
        sum += A[i];
    }

    sum /= 10;
    cout << sum;
    return 0;
}
