#include <iostream>
using namespace std;

int sum(int x, int y)
{
    int plus;
    plus = x + y;
    return plus;
}
int multiply(int x, int y)
{
    int mul;
    mul = x * y;
    return mul;
}

int divide(int x, int y)
{
    int div;
    div = x / y;
    return div;
}
int reminder(int x, int y)
{
    int rem;
    rem = x % y;
    return rem;
}
int subtract(int x, int y)
{
    int sub;
    sub = x - y;
    return sub;
}

int main()
{
    int a, b, p, result;

    // int sum;

    cout << "enter the first number = ";
    cin >> a;

    cout << "enter the second number = ";
    cin >> b;
    //   sum=a+b;
    // cout << "the sum of the number is = " << a + b;
    cout << "select the option" << endl;
    cout << "1.addition of numbers" << endl;
    cout << "2.multiplication of numbers" << endl;
    cout << "3.division of numbers" << endl;
    cout << "4.to find reminder of number" << endl;
    cout << "5.for substraction of number" << endl;

    cout << "enter the selected operation number = ";
    cin >> p;

    switch (p)
    {
    case 1:

        result = sum(a, b);
        // cout << result;
        break;
    case 2:
        result = multiply(a, b);
        // cout << result;
        break;
    case 3:
        result = divide(a, b);
        // cout << result;
        break;
    case 4:
        result = reminder(a, b);
        // cout << result;
        break;
    case 5:
        result = subtract(a, b);
        // cout << result;
        break;

    default:
        printf("Enter valid option\n");
        return 0;
    }
    cout << result;
    return 0;
}