#include <stdio.h>

int main() {
    int a, b, c;
    printf("");
    scanf("%d %d %d", &a, &b, &c);

    // Checking if the sides form a valid triangle
    if (a + b > c || b + c > a || c + a > b) {
        printf("Valid");
    }
    else {
        printf("Invalid");
    }

    return 0;
}
