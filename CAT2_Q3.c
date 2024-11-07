/*
Author Brian kimathi 
Reg CT102/G/23094/24
Date 2024/11/7
*/
#include <stdio.h>

int main() {
    float hours, wage, gross_Pay, taxes, net_Pay;
    
    // Request user input
    printf("Enter hours worked in a week: ");
    scanf("%f", &hours);
    printf("Enter hourly wage: ");
    scanf("%f", &wage);
    
    // Calculate gross pay
    if (hours > 40) {
        gross_Pay = (40 * wage) + ((hours - 40) * wage * 1.5);
    } else {
        gross_Pay = hours * wage;
    }
    
    // Calculate taxes
    if (gross_Pay <= 600) {
        taxes = gross_Pay * 0.15;
    } else {
        taxes = (600 * 0.15) + ((gross_Pay - 600) * 0.20);
    }
    
    // Calculate net pay
    net_Pay = gross_Pay - taxes;
    
    // Print results
    printf("Gross Pay: $%.2f\n", gross_Pay);
    printf("Taxes: $%.2f\n", taxes);
    printf("Net Pay: $%.2f\n", net_Pay);
    
    return 0;
}