#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream ofs("meeta.txt");
    ofs << "hey its me meeta haldar" << endl;
    ofs << 19;
    ofs.close();
}