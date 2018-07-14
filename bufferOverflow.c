#include <stdio.h>

void overflow(char *c)
{
    char *ofpt = c + 24;
    *ofpt = 63;
}

int main()
{
    char a[8];
    int b = 1;
    overflow(a);
    printf("int b: %d\n", b);
    return 0;
}
