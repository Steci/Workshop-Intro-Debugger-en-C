#include <stdio.h>

void print_array(int *arr, int size)
{
    for (int i = 0; i <= size; i++) {
        printf("Element %d: %d\n", i, arr[i]);
    }
}

int main()
{
    int numbers[] = {10, 20, 30, 40, 50};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    print_array(numbers, size);
    return 0;
}
