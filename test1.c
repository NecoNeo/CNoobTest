#include <stdio.h>
#define TRUE 1

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len)
{
    size_t i;
    for (i = 0; i < len; i++) {
        printf("%.2x", start[i]);
    }
    printf("\n");
}

void show_int(int x)
{
    show_bytes((byte_pointer) &x, sizeof(int));
}

void show_char(char c)
{
    show_bytes((byte_pointer) &c, sizeof(char));
}

void main()
{
    while (TRUE) {
        char c = getchar();
        show_int(c);
    }
    // char *a = "3.1415\n";
    // puts(a);
    // show_bytes((byte_pointer) a, 10);
}
