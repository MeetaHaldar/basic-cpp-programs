#include <iostream>
using namespace std;

void swap(int &x, int &y)
{
     cout << " the value of x and y in the function is" << endl
          << "x = " << x << ", y = " << y << endl;

     int temp;
     temp = x;
     x = y;
     y = temp;
     cout << " the value of formal parameters after the swap is " << endl
          << "x = " << x << " , y= " << y << endl;
}

int main()
{
     int a = 3, b = 6;
     cout << "before applying  the function" << endl
          << "a = " << &a
          << " , b = " << &b << endl;

     swap(a, b);

     cout << "after applying the function" << endl
          << "a= " << a << ", b = " << b << endl;
     cout << "Hence, there will be no change in actual parameter .";
     return 0;
}