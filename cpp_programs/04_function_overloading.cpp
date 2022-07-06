#include <iostream>
using namespace std;
int sum(int a, int b)
{
    return a + b;
}

float sum(float a, float b)
{
    return a + b;
}

int sum(int a, int b, int c)
{
    return a + b + c;
}

int main()
{
    cout << sum(2, 4) << endl;
    cout << sum(2.4f, 4.4f) << endl;
    cout << sum(2, 3, 4);
    return 0;
}
