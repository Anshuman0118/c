#include <stdio.h>
#include <string.h>

int main() {
    char input[100];
    char substring[100];

    // Input string
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    // Remove newline character if present
    if (input[strlen(input) - 1] == '\n')
        input[strlen(input) - 1] = '\0';

    // Input substring
    printf("Enter a substring to search for: ");
    fgets(substring, sizeof(substring), stdin);

    // Remove newline character if present
    if (substring[strlen(substring) - 1] == '\n')
        substring[strlen(substring) - 1] = '\0';

    // Search for the substring
    char *ptr = strstr(input, substring);

    if (ptr != NULL) {
        printf("'%s' found at index %ld in the input string.\n", substring, ptr - input);
    } else {
        printf("'%s' not found in the input string.\n", substring);
    }

    return 0;
}