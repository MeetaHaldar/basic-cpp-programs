#include<iostream>
using namespace std;
 class meeta {

int length ;
int breadth;

public:
void setLength(int l)
{
    length=l;
}
void setBreadth (int b)
{
    breadth=b;

}

int area ()
{
    return length*breadth;
}

 };
 int main()
 {
 meeta m1;
 meeta *p=new meeta ();
 p->setLength(7);
 p->setBreadth(3);
cout<<p->area();
return 0;
 }