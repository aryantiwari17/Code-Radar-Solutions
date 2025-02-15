#include <stdio.h>

int main() {
    char ch;

    // Input a character
    printf("");
    scanf("%c", &ch);

    // Check if uppercase
    if (ch >= 'A' && ch <= 'Z') {
        printf("Uppercase\n");
    }
    // Check if lowercase
    else if (ch >= 'a' && ch <= 'z') {
        printf("Lowercase\n");
    }
    else {
        printf("Not an alphabet\n");
    }

    return 0;
}
