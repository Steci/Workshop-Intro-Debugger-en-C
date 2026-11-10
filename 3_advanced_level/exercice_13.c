#include <stdio.h>
#include <string.h>

int main()
{
    char buffer[] = "Hello, World!";

    memcpy(buffer + 3, buffer, 6);
    printf("Buffer: %s\n", buffer);
    return 0;
}
