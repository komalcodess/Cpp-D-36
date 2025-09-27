#include <stdio.h>
#include <string.h>

int main() {
    char str[58];

    printf("Enter a string: ");
    gets(str);
    if (strlen(str) > 5) {
        printf("The string has more than 5 characters");
    } else {
        printf("The string doesn't have more than 5 characters");
    }

    return 0;
}
