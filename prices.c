#include <stdio.h>


#define JOLLOF 35.00
#define WAAKYE 25.00
#define BANKU_TILAPIA 60.00
#define BOTTLED_WATER 5.00
#define SOFT_DRINK 10.00



int main() {
    printf("CAMPUS CHOP BAR\n");
    printf("=====================\n");
    printf("                        \n");

    printf("Welcome to the Campus Chop Bar!\n");
    printf("                        \n");   

    // Display the menu with prices
    printf("Menu\n");    
    printf("1. Jollof - GHS%.2f\n", JOLLOF);
    printf("2. Waakye - GHS%.2f\n", WAAKYE);
    printf("3. Banku with Tilapia - GHS%.2f\n", BANKU_TILAPIA);
    printf("4. Botted Water - GHS%.2f\n", BOTTLED_WATER);
    printf("5. Soft Drink - GHS%.2f\n", SOFT_DRINK);
    printf("                        \n");

    // Ask the user the quantity of each item they want to order
    float jollof_quantity, waakye_quantity, banku_tilapia_quantity, bottled_water_quantity, soft_drink_quantity, subtotal, service_charge, VAT, total, amount_paid, change;

    printf("Enter the quantity of each item you want to order:\n");
    printf("Jollof: ");
    scanf("%f", &jollof_quantity);
    printf("Waakye: ");
    scanf("%f", &waakye_quantity);
    printf("Banku with Tilapia: ");
    scanf("%f", &banku_tilapia_quantity);
    printf("Botted Water: ");
    scanf("%f", &bottled_water_quantity);
    printf("Soft Drink: ");
    scanf("%f", &soft_drink_quantity);

    // Calculate the subtotal
    subtotal = (jollof_quantity * JOLLOF) + (waakye_quantity * WAAKYE) + (banku_tilapia_quantity * BANKU_TILAPIA) + (bottled_water_quantity * BOTTLED_WATER) + (soft_drink_quantity * SOFT_DRINK);

    // Display the subtotal
    printf("                        \n");
    printf("Subtotal: GHS%.2f\n", subtotal);
    
    // Calculate the service charge (5% of subtotal)
    service_charge = subtotal * 0.05;

    // Display the service charge
    printf("Service Charge: GHS%.2f\n", service_charge);

    // Calculate the VAT (15% of subtotal)
    VAT = subtotal * 0.15;

    // Display the VAT
    printf("VAT: GHS%.2f\n", VAT);

    // Calculate the total
    total = subtotal + service_charge + VAT;

    // Display the total
    printf("-------------------------\n");
    printf("Total: GHS%.2f\n", total);
    printf("-------------------------\n");

    printf("Enter the amount paid by the customer: GHS");
    scanf("%f", &amount_paid);

    // Calculate the change
    change = amount_paid - total;

    // Display the change
    printf("Change: GHS%.2f\n", change);

    
    printf("                        \n");
    printf("Thank you for dining with us!\n");
    printf("Have a great day!\n");

    getchar(); // Wait for user input before closing the program
    getchar(); // Wait for user input before closing the program
    return 0;
}