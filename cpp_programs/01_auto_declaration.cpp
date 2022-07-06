#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    float c = 5.6;
    char t = 's';
    auto p = a * t + c; //does not matter what is the data type of variable it will give the correct ans.
    cout << p << endl;
    return 0;
}