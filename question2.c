// Program to count the no's of positive and negative number in an array
#include <stdio.h>

int main() {
    int n, i, positive = 0, negative = 0;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    // Count positive and negative numbers
    for(i = 0; i < n; i++) {
        if(arr[i] > 0)
            positive++;
        else if(arr[i] < 0)
            negative++;
    }
    
    printf("Total Positive Numbers: %d\n", positive);
    printf("Total Negative Numbers: %d\n", negative);
    
    return 0;
}

/*explanation: After the array is filled with user input, this program counts how many numbers are positive and how many are negative.

Working:
- Take input for each array element.
- Initialize two counters: one for positive, one for negative.
- Use a loop to check each element:
   - If the element is greater than 0, increase the positive counter.
   - If it is less than 0, increase the negative counter.
- Print the count of both.
*/