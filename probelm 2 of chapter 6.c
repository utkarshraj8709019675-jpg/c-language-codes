#include <stdio.h>
void showaddress(int x)
{
    printf("the address of x is %p\n", &x);
}
int main()
{
    int a = 5;
    printf("the address of a is %p\n", &a);
    showaddress(a);
    return 0;
}
