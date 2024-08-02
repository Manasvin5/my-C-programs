#include <stdio.h>



int fibonacci(int n) {
    if (n <= 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n;

    
    printf("Enter the position in Fibonacci series (n): ");
    scanf("%d", &n);

    
    if (n < 0) {
        printf("Position must be a non-negative integer.\n");
    } else {
        printf("The %dth Fibonacci number is: %d\n", n, fibonacci(n));
    }

    return 0;
}