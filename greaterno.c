#include <stdio.h>

int main() {
    int x, y;
    printf("Enter first number: ");
    scanf("%d", &x);
    printf("Enter second number: ");
    scanf("%d", &y);
    if (x > y) {
        printf("%d is the largest number.\n", x);
    } else {
        printf("%d is the largest number.\n", y);
    }
    
    return 0;
}
