#include <stdio.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);// ye method unsafe hai hame gets() real-world applications mai use nahi krna chayiye fgets() ka use karo.
    printf("You entered: %s\n", str);
    return 0;
}
