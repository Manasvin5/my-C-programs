#include <stdio.h>

void printBinary(int n) {
    if (n > 1) {
        printBinary(n / 2);
    }
    printf("%d", n % 2);
}

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    printf("Binary representation of %d is: ", num);
    printBinary(num);
    printf("\n");

    return 0;
}
