#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *create_message(const char *value)
{
    char *message = malloc(sizeof(char) * (strlen(value) + 1));

    for (int i = 0; value[i] != '\0'; i++) {
        message[i] = value[i];
    }
    message[strlen(value)] = '\0';
    return message;
}

int main()
{
    char *result = create_message("Hello, World!");

    printf("Value: %s\n", result);
    return 0;
}