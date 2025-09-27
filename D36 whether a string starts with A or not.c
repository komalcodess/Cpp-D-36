#include <stdio.h>
#include <string.h>

int main() {
    char str[56];

    printf("Enter a string: ");
    gets(str);

    if (str[0] == 'A' || str[0] == 'a') {
        printf("The string starts with A.");
    } else {
        printf("The string does not start with A.");
    }

    return 0;
}
