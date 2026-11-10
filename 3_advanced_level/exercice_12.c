#include <stdlib.h>

int main()
{
    int *ptr = malloc(sizeof(int));

    *ptr = 42;
    free(ptr);
    free(ptr);
    return 0;
}
