#include <iostream>
using namespace std;
int main()
{
    int a, A[10];
    for (int i = 0; i < 10; i++)
    {
        cout << "enter your element = ";
        cin >> A[i];
    }

    cout << "enter the key element= ";
    cin >> a;
    for (int i = 0; i < 10; i++)
    {
        if (a == A[i])
        {
            cout << "the position where your key value is situated at index = " << i;
        }
    }
    return 0;
}