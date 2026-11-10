#include <stdio.h>
#include <stdlib.h>

void allocate_and_free()
{
    int *arr = (int *)malloc(5 * sizeof(int));
    if (!arr) return;

    for (int i = 0; i < 5; i++)
        arr[i] = i;

    free(arr);
    printf("First element after free: %d\n", arr[0]);
}

int main()
{
    allocate_and_free();
    return 0;
}
