#include <iostream>
using namespace std;
int main()
{
    int n, m, count = 0, result, p = 0, product = 0,reverse=0;

    cout << "enter your number = ";
    cin >> n;

    while(n!=0){
        reverse = (reverse*10)+(n%10);
        n/=10;
    }//reverse the given value
    while (reverse != 0)
    {
       

        switch (reverse % 10)
        {
        case 0:
            cout << "Zero";
            break;
        case 1:
            cout << "One";
            break;

        case 2:
            cout << "two";
            break;

        case 3:
            cout << "Three";
            break;

        case 4:
            cout << "four";
            break;

        case 5:
            cout << "Five";
            break;

        case 6:
            cout << "Six";
            break;

        case 7:
            cout << "Seven";
            break;

        case 8:
            cout << "Eight";
            break;

        case 9:
            cout << "Nine";
            break;

        default:
            cout << "Please enter a number .";
            break;
            
        }
        reverse=reverse/10;
    }
    return 0;
}