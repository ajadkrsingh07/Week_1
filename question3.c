// Convert decimal to binary
#include <stdio.h>

int main() {
    int num, binary[32], i = 0;

    printf("Enter a decimal number: ");
    scanf("%d", &num);

    while (num > 0) {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }

    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }

    return 0;
}


/*explanation: This program converts a decimal number to its binary representation.
Working:
- Take a decimal number as input.
- Use a loop to divide the number by 2 and store the remainder each time.
- Each remainder represents a binary digit (starting from LSB).
- Store the remainders in an array.
- After the loop ends, print the array in reverse order to get the correct binary number.*/