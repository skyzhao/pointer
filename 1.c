#include <stdio.h>

int main(int argc, char *argv[])
{
    int i;
    i = 1;
    int *p = &i;
    printf("0x%x\n", p);
    printf("0x%x\n", &i);
    return 0;
}
