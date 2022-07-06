#include <iostream>
using namespace std;
int main()
{
    int a = 30;
    int &x = a;
    cout << "a = " << a << endl;
    cout << " &x = " << x << endl;
    return 0;
}