#include<stdio.h>  
 int main()    
{    
int n, r=0, rem;    
printf("Enter a number: ");    
  scanf("%d", &n);    
  while(n!=0)    
  {    
     rem=n%10;    
     r=r*10+rem;    
     n/=10;    
  }    
  printf("Reversed Number: %d",r);    
return 0;  
}   