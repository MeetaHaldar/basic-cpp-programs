#include <iostream>
using namespace std;
class meeta //class having name meeta.

{

private:
    int length;
    int breadth;

public:
    void setLength(int l) //Mutator

    {
        length = l;
    }

    int getLength()  //accessor
    {
        return length;
    }
    void setBredth(int b)  //Mutators

    {
        breadth = b;
    }

    int getBreadth()  //Accessor
    {
        return breadth;
    }

    int area()  //area function   or Facilitator
    {
        return length * breadth;
    }

    meeta(int l=0, int b=0)  //parameterized constructor
    {
        setLength(l);
        setBredth(b);
    }
    meeta(meeta &p) //copy constructor
//p is copying an argument 
    {
        length = p.length;

        breadth = p.breadth;
    }
    ~meeta();//destructor function
};
    int main()
    {
        meeta m1(2, 5); //class having object m1.
        meeta m2(m1); //an object having an object of same class in the argument box get copied 
        //his arguments.
        cout << m1.area() << endl;
        return 0;
    }
