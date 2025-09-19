#include<stdio.h>

int main() {
    char fullName[30];
    char section[10];
    int num1;
    int num2;
    int num3;
    int num4;

    printf("Input Complete Name: \n");
    fgets(fullName, sizeof(fullName), stdin);

    printf("Input Section: \n");
    fgets(section, sizeof(section), stdin);

    printf("Input 1st Quarter Grade: \n");
    scanf("%d", &num1);

    printf("Input 2nd Quarter Grade: \n");
    scanf("%d", &num2);

    printf("Input 3rd Quarter Grade: \n");
    scanf("%d", &num3);

    printf("Input 4th Quarter Grade: \n");
    scanf("%d", &num4);

    int sum = num1 + num2 + num3 + num4;
    float average = sum / 4.0;

    printf("\n");
    printf("Student: %s", fullName);
    printf("Section: %s", section);
    printf("Average Grade: %.2f\n", average);

    if (average >= 90 && average <= 100) {
        printf("Remarks: Outstanding.\n");
    }
    else if (average >= 85) {
        printf("Remarks: Very Satisfactory.\n");
    }
    else if (average >= 80) {
        printf("Remarks: Satisfactory.\n");
    }
    else if (average >= 75) {
        printf("Remarks: Fair.\n");
    }
    else if (average < 75 && average >= 0) {
        printf("Remarks: Failed.\n");
    }
   return 0;

}