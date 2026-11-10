#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr = malloc(5 * sizeof(int));

    for (int i = 0; i < 5; i++) {
        arr[i] = i;
    }
    printf("Out of bounds value: %d\n", arr[5]);
    free(arr);
    return 0;
}
