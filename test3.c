#include <stdio.h>

int main()
{
    int arr[] = { 1, 2, 3 };
    printf("arrAddr: %p\n", arr);
    printf("index 0: %p\n", &arr[0]);
    printf("index 1: %p\n", arr + 1);
    printf("index 1: %p\n", &arr[1]);
    return 0;
}
