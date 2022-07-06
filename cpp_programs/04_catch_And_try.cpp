#include <iostream>
using namespace std;

class myexception1 : exception
{
};

class myexception2 : myexception1
{
};

int main()
{
    try
    {
        throw 'k';
    }
    catch (char e)
    {
        cout << "catch char .";
    }
    catch (string e)
    {
        cout << "string char .";
    }
    catch (double e)
    {
        cout << "double char .";
    }
    catch (...)
    {
        cout << "catch all .";
    }
}