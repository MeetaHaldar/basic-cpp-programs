#include <iostream>
using namespace std;
enum day
{
    mon = 1,
    tue,
    wed = 5,   //what we declare it will manage according to itsef.
    thur,
    fri = 4,
    sat,
    sun
};

int main()
{
    day p;
    p = mon;
    cout << mon;
    cout << tue;
    cout << wed;
    cout << thur;
    cout << fri;
    cout << sat;
    cout << sun;
    return 0;
}