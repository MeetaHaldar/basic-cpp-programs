#include <iostream>
using namespace std;
class rectangle

{
public:
    void area()
    {
        cout << "this is area." << endl;
    };
};
class cuboid : public rectangle
{
public:
    void volume()
    {
        cout << "this is volume.";
    }
};
class cub : public cuboid
{
public:
    void volu()
    {
        cout << "this is volu.";
    }
};

int main()
{

    cuboid *c;
    cub p;
    c = &p;
    c->area();
    c->volume();
    return 0;
}
// int main()
// {
//     rectangle *t;
//     cuboid c;
//     t = &c;
//     t->area();
//     return 0;
// }