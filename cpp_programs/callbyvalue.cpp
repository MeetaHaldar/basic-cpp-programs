#include<iostream>
using namespace std;
// pass by value or call by value.
 void swap (int x,int y){
     int temp=x;
     x=y;
     y=temp;
 }

 int main()
 {
     int a=20, b=50;
     cout<<"before passing value="<<a <<endl<<b<<endl;
     swap(a,b);
    //  for the execution of function
     cout<<"after passing value="<<a<<endl<<b<<endl;
     return 0;
 }