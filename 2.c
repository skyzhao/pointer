#include <stdio.h>

int main(int argc, char *argv[])
{
    int i = 1;
    char c = 1;
    int *p1 = &i;
    char *p2 = &c;
    printf("the address of int is: 0x%x\n", p1);
    printf("the address of char is: 0x%x\n", p2);
    p1++;
    p2++;
    printf("the new address of int is: 0x%x\n", p1);
    printf("the new address of char is: 0x%x\n", p2);
    return 0;
}
