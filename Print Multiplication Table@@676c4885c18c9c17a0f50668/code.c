// Your code here...
#include <stdio.h>

#include <stdio.h>

int main() {
    int num, i;

    // Taking input from user
    printf("");
    scanf("%d", &num);

    // Loop to print the multiplication table
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}
