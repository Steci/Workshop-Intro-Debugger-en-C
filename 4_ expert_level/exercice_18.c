#include <stdio.h>
#include <string.h>

int main()
{
    char buffer[10];

    strcpy(buffer, "This is a very long string");
    printf("Buffer content: %s\n", buffer);
    return 0;
}
