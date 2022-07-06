#include <iostream>
using namespace std;
class bmw
{
public:
    static int price;

    static int getprice()
    {
        return price;
    }
};

int bmw::price = 90;
int main()
{
    bmw b1;
    cout << b1.getprice() << endl
         << bmw::getprice();
}