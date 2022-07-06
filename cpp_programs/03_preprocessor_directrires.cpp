#include <iostream>
using namespace std;
#define pi 3.14
#define c cout
#ifndef pi
#define pi 3;
#endif
#define msg(x) #x
int main()
{
    c << pi << endl
      << msg(its me meeta haldar);
}
