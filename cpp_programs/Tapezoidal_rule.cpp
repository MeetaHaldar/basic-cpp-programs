/* ******************************
Author: Exploring Bits
****************************** */
#include <iostream>
#include <math.h>
#define f(x) (x + (1 / x))

using namespace std;

void trapezoidalRule()
{
    double a, b;
    int n;
    cout << "Enter the lower and upper limits of the integral: ";
    cin >> a >> b;
    cout << "Enter the number of subintervals you want: ";
    cin >> n;
    double h = abs(b - a) / n;
    double y = 0;
    y = y + f(a) + f(b);
    for (double i = a + h; i < b;)
    {
        y = y + (2 * f(i));
        i = i + h;
    }
    y = y * h / 2;
    cout << "\nThe integral of the equation using Trapezoidal Rule is " << y << endl;
}

int main()
{
    trapezoidalRule();
}