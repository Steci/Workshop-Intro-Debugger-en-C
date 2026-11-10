#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr = (int *)malloc(sizeof(int));
    if (!ptr) return 1;

    *ptr = 42;
    printf("Value before free: %d\n", *ptr);
    free(ptr);
    printf("Value after free: %d\n", *ptr);
    return 0;
}
