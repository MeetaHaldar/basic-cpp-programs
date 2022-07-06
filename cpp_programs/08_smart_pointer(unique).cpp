#include <iostream>
#include <memory>
#include <utility>
using namespace std;
class rectangle
{
private:
    int length;
    int bredth;

public:
    rectangle(int l, int b)
    {
        length = l;
        bredth = b;
    }
    int area()
    {
        cout << "heyyyyy";
        return length * bredth;
    }
};

int main()
{
    unique_ptr<rectangle> ptr(new rectangle(2, 9));
    cout << ptr->area() << endl;
    unique_ptr<rectangle> ptr1;
    // ptr1 = move(ptr);
    ptr = ptr1;
    cout << ptr1->area();
    cout << ptr.use_count();
}