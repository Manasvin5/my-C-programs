#include <stdio.h>

// Function prototypes
void calculateAreaWithHardcodedInputs();
void calculateAreaWithUserInputs();

int main() {
    int choice;

    while(1) {
        // Display the menu
        printf("\nMenu:\n");
        printf("1. Calculate area with hard-coded inputs\n");
        printf("2. Calculate area with user-supplied inputs\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Perform action based on user choice
        switch(choice) {
            case 1:
                calculateAreaWithHardcodedInputs();
                break;
            case 2:
                calculateAreaWithUserInputs();
                break;
            case 3:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}

// Function to calculate area with hard-coded inputs
void calculateAreaWithHardcodedInputs() {
    int length = 5;
    int width = 10;
    int area = length * width;

    printf("Length = %d\n", length);
    printf("Width = %d\n", width);
    printf("Area = %d\n", area);
}

// Function to calculate area with user-supplied inputs
void calculateAreaWithUserInputs() {
    int length, width, area;

    printf("Enter length: ");
    scanf("%d", &length);
    printf("Enter width: ");
    scanf("%d", &width);

    area = length * width;
    printf("Area = %d\n", area);
}
