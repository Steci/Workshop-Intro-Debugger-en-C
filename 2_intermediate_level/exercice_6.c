#include <stdio.h>

void recursive_function(int n)
{
    printf("Recursion depth: %d\n", n);
    recursive_function(n + 1);
}

int main()
{
    recursive_function(1);
    return 0;
}
