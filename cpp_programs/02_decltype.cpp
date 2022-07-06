#include <iostream>
using namespace std;
int main()
{
    int a = 65;
    double b = 45.7;
    decltype(b) f = 78.9; //it means the variable will have same data type .
    auto p = a + b + f;
    cout << p << endl;
    return 0;
}