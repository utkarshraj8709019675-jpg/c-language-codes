#include <stdio.h>

int main()
{
    int a =5;
    int* j = &a;
    printf ("the address of a is %p\n", &a);
    printf("the value of a is %d\n", *&a);

    return 0;
}