#include<stdio.h>  
#include<conio.h>  
void main()  
{  
    int a, b;  
    int res; // store the resultant of modulus expression  
      
    a = 5;  
    b = 2;  
    res = a % b; // define modulus expression  
    printf(" Modulus returns a remainder: %d", res);  
      
    res = b % a; // define modulus expression  
    printf(" \n Modulus returns a remainder: %d", res);  
      
    a = 10;  
    b = 5;  
    res = a % b; // define modulus expression  
    printf(" \n Modulus returns a remainder: %d", res);  
    getch();  
}  