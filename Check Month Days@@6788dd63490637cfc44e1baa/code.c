#include <stdio.h>

int main() {
    int month;

    // Input month number
    printf("");
    scanf("%d",&month);
    switch(month) {
        case 1:
            printf("31\n");
            break;
        case 2:
            printf("28\n");
            break;
        case 3:
            printf("March\n");
            break;
        case 4:
            printf("30\n");
            break;
        case 5:
            printf("May\n");
            break;
        case 6:
            printf("June\n");
            break;
        case 7:
            printf("July\n");
            break;
        case 8:
            printf("August\n");
            break;
        case 9:
            printf("September\n");
            break;
        case 10:
            printf("October\n");
            break;
        case 11:
            printf("November\n");
            break;
        case 12:
            printf("31\n");
            break;
        default:
            printf("Invalid month\n");
    }

    return 0;
}
