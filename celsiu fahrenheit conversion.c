#include <stdio.h>

int main() {
    float celsius, fahrenheit;
    int choice;

    printf("1. Celsius to Fahrenheit\n2. Fahrenheit to Celsius\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    if(choice == 1) {
        printf("Enter Celsius: ");
        scanf("%f", &celsius);
        fahrenheit = (celsius * 9/5) + 32;
        printf("Fahrenheit = %.2f\n", fahrenheit);
    } else {
        printf("Enter Fahrenheit: ");
        scanf("%f", &fahrenheit);
        celsius = (fahrenheit - 32) * 5/9;
        printf("Celsius = %.2f\n", celsius);
    }

    return 0;
}