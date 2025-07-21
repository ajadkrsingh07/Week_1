// Program to input elements into array and print them 

#include <stdio.h>

int main() {
   int range;
   
   printf("Enter the number of elements in the array: ");
   scanf("%d", &range );
   int arr[range];
   printf("Enter the elements in the array : \n");
   
   for(int i = 0 ; i<range;i++){
       printf("Element %d :",i+1);
       scanf("%d",&arr[i]);
   }
   printf("The elements in the array are : ");
   for(int i = 0 ; i<range;i++){
       printf("%d ",arr[i]);
   }

    return 0;
}

/*explanation: This program lets the user input a fixed number of elements into an array and then prints them.

Working:
- Ask the user how many elements they want to enter.
- Use a loop to input each element and store it in the array.
- Use another loop to print all the elements one by one.*/