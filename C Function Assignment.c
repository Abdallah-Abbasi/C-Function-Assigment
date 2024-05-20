#include <stdio.h>

void printMenu(int selection);
double calculatePrice(int ConKiloWatt);

int main() {
    int ConKiloWatt, selection;
    double price;

    printf("Enter the amount of energy consumed in kW: ");
    scanf("%d", &ConKiloWatt);

    printMenu(selection);

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

double calculatePrice(int ConKiloWatt) {
    double price;
    if (ConKiloWatt >= 100) {
        price = ConKiloWatt * 1.0;
    } else {
        price = (ConKiloWatt - 100) * 2.0 + 100;
    }
    return price;
}

void printMenu(int selection) {
    printf("\n1 - cal_Price.\n");
    printf("2 - Exit.\n");
    printf("......enter your choice: ");
    scanf("%d", &selection);
}
