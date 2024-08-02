#include <stdio.h>

int main() {
    // Program to check whether a number is divisible by 97 or not
    printf("Program to check whether a number is divisible by 97 or not. Enter the number:\n");
    int a;
    scanf("%d", &a);
    
    if (a % 97 != 0) {
        printf("Number not divisible by 97\n");
    } else {
        printf("Number is divisible by 97\n");
    }

    return 0;
}
