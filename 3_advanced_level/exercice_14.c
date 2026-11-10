#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr = malloc(5 * sizeof(int));

    arr = realloc(arr, 10 * sizeof(int));
    for (int i = 0; i < 10; i++) {
        arr[i] = i;
    }
    free(arr);
    return 0;
}
