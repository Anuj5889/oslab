#include <stdio.h>

int main() {
    int num, hundreds, tens, units, reversed;

    // Ask user for a 3-digit number
    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    // Check if the number is indeed a 3-digit number
    if (num < 100 || num > 999) {
        printf("That's not a 3-digit number!\n");
        return 1;
    }

    // Break the number into digits
    hundreds = num / 100;
    tens = (num / 10) % 10;
    units = num % 10;

    // Reverse the digits
    reversed = (units * 100) + (tens * 10) + hundreds;

    // Show result
    printf("Reversed number: %d\n", reversed);

    return 0;
}


