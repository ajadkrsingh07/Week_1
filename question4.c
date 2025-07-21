
// Generate 'n' no of terms in Fibonacci series
#include <stdio.h>

int main() {
    int n, a = 0, b = 1, next;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }

    return 0;


   /* Explanation:
This program generates and prints the first 'n' numbers of the Fibonacci sequence.

Working:
- Take the number 'n' as input from the user.
- Start with the first two terms: 0 and 1.
- Use a loop to calculate the next terms by adding the two previous numbers.
- Continue this until 'n' terms are printed.*/
