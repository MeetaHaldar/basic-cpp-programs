#include <iostream>
using namespace std;
int g = 0; // global variable
void fun()
{
    int a = 5; //local variable
    g = g + a;
    cout << "g = " << g << endl;
}
int main()
{
    g = 10;
    fun();
    g++;
    cout << "g = " << g;
    return 0;
}
