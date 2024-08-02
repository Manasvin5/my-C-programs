#include <stdio.h>


int main() {
    

    float subject1, subject2, subject3;
    float total_marks, total_obtained;
    float percentage, average;


    printf("Enter marks for Subject 1: ");
    scanf("%f", &subject1);
    printf("Enter marks for Subject 2: ");
    scanf("%f", &subject2);
    printf("Enter marks for Subject 3: ");
    scanf("%f", &subject3);


    total_marks = 300; 
    total_obtained = subject1 + subject2 + subject3;
    percentage = (total_obtained / total_marks) * 100;


    if (subject1 < 33 || subject2 < 33 || subject3 < 33) {
        printf("Fail: You have scored less than 33%% in one or more subjects.\n");
    } else if (percentage < 40) {
        printf("Fail: Your total percentage is less than 40%%.\n");
    } else {
        printf("Pass: Congratulations, you have passed!\n");
    }


    return 0;
}
