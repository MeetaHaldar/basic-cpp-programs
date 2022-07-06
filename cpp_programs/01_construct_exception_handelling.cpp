#include <iostream>
using namespace std;
int main()
{
    int a = 3, b = 3, c;

    try
    {
        if (b == 0)
            throw 1;
        c = a / b;
        cout << c << endl;
    }
    catch (int e)
    {
        cout << "there is an error the value having 0.";
    }
    cout << "bye bye .";
}