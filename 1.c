#include <stdio.h>

int main(int argc, char *argv[])
{
    int i;
    i = 1;
    int *p = &i;
    printf("the address is: 0x%x\n", p);
    printf("the content is: %d\n", *p);
    printf("the address is: 0x%x\n", &i);
    *p = 2;
    printf("the new content is: %d\n", i);
    return 0;
}
