#include <iostream>
using namespace std;
int x = 10;
int main()
{
    int x = 20;
    {
        int x = 30;
        cout << "x = " << x << endl;
    }
    cout << "x = " << x << endl;
    cout << "global x = " << ::x;
    return 0;
}