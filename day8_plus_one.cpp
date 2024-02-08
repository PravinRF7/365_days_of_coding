#include <stdio.h>
#include <stdlib.h>

int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int carry = 1;
    int sum = 0;

    for (int i = digitsSize - 1; i >= 0; i--) {
        sum = digits[i] + carry;

        if (sum >= 10) {
            digits[i] = sum % 10;
            carry = sum / 10;
        } else {
            digits[i] = sum;
            *returnSize = digitsSize; // No change in size, returnSize remains the same
            return digits;
        }
    }

    if (carry > 0) {
        // Need to insert a new digit at the beginning
        int* newDigits = (int*)malloc((digitsSize + 1) * sizeof(int));

        // Copy the original digits to the new array starting from index 1
        for (int i = 1; i <= digitsSize; i++) {
            newDigits[i] = digits[i - 1];
        }

        // Set the first element to the carry value
        newDigits[0] = carry;

        *returnSize = digitsSize + 1;
        return newDigits;
    }

    *returnSize = digitsSize;
    return digits;
}

int main() {
    int digits[] = {1, 2, 9};
    int digitsSize = sizeof(digits) / sizeof(digits[0]);
    int returnSize;

    int* result = plusOne(digits, digitsSize, &returnSize);

    printf("Original Digits: ");
    for (int i = 0; i < digitsSize; i++) {
        printf("%d ", digits[i]);
    }

    printf("\nResult: ");
    for (int i = 0; i < returnSize; i++) {
        printf("%d ", result[i]);
    }

    // Don't forget to free the dynamically allocated memory
    free(result);

    return 0;
}

