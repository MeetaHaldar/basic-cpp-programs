#include <iostream>
using namespace std;
int main()
{
    //first use of constant  // const int a = 13;
    int a = 10;
    int y = 6;
    // a++; if a variable get constant then we cant change its value.
    //second use of constant .
    const int *ptr = &a;
    //third use of constant 
    //int const *ptr=&a;
    //both are same. itcan point on another variable and can change the value.
    //fourth use of constant 
    //int *const ptr=&a; it cant point on any other variable but can change the value .
//fifth use of constant
//const int *const ptr=&a; itcan not point on another variable and also can not change the value.
    *ptr++;
    ptr = &y;
    cout << a << " " << *ptr;
}
