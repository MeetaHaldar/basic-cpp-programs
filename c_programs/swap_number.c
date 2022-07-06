#include <stdio.h>
int main()
{
    int a = 0, b = 0, c = 0;
    a = 3;
    b = 4;
    c = a;
    a = b;
    b = c;
    printf("%d", a);
    printf("%d", b);
    return 0;
}