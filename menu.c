# include <stdio.h>
# include <math.h>

// Function prototypes
void calculateRectangleAreaHardcoded();
void calculateRectangleAreaUserInput();
void calculateCircleArea();
void calculateCylinderVolume();
void convertCelsiusToFahrenheit();
void calculateSimpleInterest();

int main() {
    int choice;
    
    do {
        printf("\nMenu:\n");
        printf("1. Calculate area of a rectangle (hard coded inputs)\n");
        printf("2. Calculate area of a rectangle (user inputs)\n");
        printf("3. Calculate area of a circle\n");
        printf("4. Calculate volume of a cylinder\n");
        printf("5. Convert Celsius to Fahrenheit\n");
        printf("6. Calculate simple interest\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                calculateRectangleAreaHardcoded();
                break;
            case 2:
                calculateRectangleAreaUserInput();
                break;
            case 3:
                calculateCircleArea();
                break;
            case 4:
                calculateCylinderVolume();
                break;
            case 5:
                convertCelsiusToFahrenheit();
                break;
            case 6:
                calculateSimpleInterest();
                break;
            case 7:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 7);
    
    return 0;
}

void calculateRectangleAreaHardcoded() {
    int length = 10;
    int breadth = 5;
    int area = length * breadth;
    printf("Area of the rectangle (hard coded inputs): %d\n", area);
}

void calculateRectangleAreaUserInput() {
    int length, breadth;
    printf("Enter the length of the rectangle: ");
    scanf("%d", &length);
    printf("Enter the breadth of the rectangle: ");
    scanf("%d", &breadth);
    int area = length * breadth;
    printf("Area of the rectangle (user inputs): %d\n", area);
}

void calculateCircleArea() {
    float radius;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    float area = M_PI * radius * radius;
    printf("Area of the circle: %.2f\n", area);
}

void calculateCylinderVolume() {
    float radius, height;
    printf("Enter the radius of the cylinder: ");
    scanf("%f", &radius);
    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);
    float volume = M_PI * radius * radius * height;
    printf("Volume of the cylinder: %.2f\n", volume);
}

void convertCelsiusToFahrenheit() {
    float celsius;
    printf("Enter the temperature in Celsius: ");
    scanf("%f", &celsius);
    float fahrenheit = (celsius * 9 / 5) + 32;
    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);
}

void calculateSimpleInterest() {
    float principal, rate, time;
    printf("Enter the principal amount: ");
    scanf("%f", &principal);
    printf("Enter the rate of interest: ");
    scanf("%f", &rate);
    printf("Enter the time (in years): ");
    scanf("%f", &time);
    float interest = (principal * rate * time) / 100;
    printf("Simple interest: %.2f\n", interest);
}

