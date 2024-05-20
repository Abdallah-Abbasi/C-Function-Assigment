#include <stdio.h>

void printMenu();
double calculatePrice(int ConKiloWatt);

int main() {
    int ConKiloWatt, selection;
    double price;

    printf("Enter the amount of energy consumed in kW: ");
    scanf("%d", &ConKiloWatt);

    printMenu();
    scanf("%d", &selection);

    if (selection == 1) {
        price = calculatePrice(ConKiloWatt);
        printf("The price for %d kW is $%.2f\n", ConKiloWatt, price);
    } else if (selection == 2) {
        printf("Exiting the program.\n");
    } else {
        printf("Invalid choice. Please enter 1 or 2.\n");
    }

    return 0;
}

void printMenu() {
    printf("\n1 - cal_Price.\n");
    printf("2 - Exit.\n");
    printf("......enter your choice: ");
}

double calculatePrice(int ConKiloWatt) {
    double price;
    if (ConKiloWatt <= 100) {
        price = ConKiloWatt * 1.0;
    } else {
        price = 100 + (ConKiloWatt - 100) * 2.0;
    }
    return price;
}

