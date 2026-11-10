#include <stdio.h>

int compute_average(int *values, int count)
{
    int total = 0;
    int result = 0;

    for (int i = 0; i < count; i++) {
        total += values[i];
    }
    result = total / count;
    return result;
}

int main()
{
    int values[] = {10, 20, 17};
    int count = 0;
    int avg = compute_average(values, count);

    printf("Average: %d\n", avg);
    return 0;
}
