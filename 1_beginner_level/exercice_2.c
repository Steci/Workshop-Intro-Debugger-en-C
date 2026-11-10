#include <stdio.h>

void print_string(char *str)
{
    while (*str != '\0') {
        printf("%c", *str);
        str++;
    }
}

int main()
{
    char *message = NULL;

    print_string(message);
    return 0;
}
