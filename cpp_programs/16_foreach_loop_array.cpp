#include <iostream>
using namespace std;
int main()
{
    int A[2][2];
    for (auto &x : A)
    {
        for (auto &y : x)
        {
            cout << "enter = ";
            cin >> y;
        }
    }
    for (auto &x : A)
    {
        for (auto &y : x)
        {
            cout << y <<"  ";
        }
        cout << endl;
    }
    return 0;
}