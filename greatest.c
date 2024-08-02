#include <stdio.h>

int main() {
    int a, b, c, d;
    int greatest;

    printf("Enter four numbers:\n");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    greatest = a; 

    if (b > greatest) {
        greatest = b;
    }
    if (c > greatest) {
        greatest = c;
    }
    if (d > greatest) {
        greatest = d;
    }

    
    printf("The greatest number is: %d\n", greatest);

    return 0;
}
