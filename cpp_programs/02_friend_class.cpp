#include <iostream>
using namespace std;
class tt;
class hh
{
private:
    int d;

public:
    int p;

protected:
    int o;

    friend tt;
};

class tt
{

public:
    void fun()
    {
        hh t;
        t.d = 8;
        cout << t.d << endl;

        t.o = 6;
        cout << t.o;
    }
};

int main()
{
tt h;

    h.fun();
    return 0;
}