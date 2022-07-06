#include <iostream>
using namespace std;

int maxim(int a = 0, int b = 0, int c = 0)
{
    return a > b && a > c ? a : (b > a && b > c ? b : c);
}

int main()
{
    cout << maxim() << endl;
    cout << maxim(2) << endl;
    cout << maxim(4, 6) << endl;
    cout << maxim(4, 8, 6) << endl;
    return 0;
}