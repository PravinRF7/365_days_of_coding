#include <stdio.h>

void mergeSortedArrays(const int arr1[], int m, const int arr2[], int n, int result[]) {
    int i = 0, j = 0, k = 0;
    while (i < m && j < n) {
        result[k++] = (arr1[i] <= arr2[j]) ? arr1[i++] : arr2[j++];
    }
    while (i < m) {
        result[k++] = arr1[i++];
    }
    while (j < n) {
        result[k++] = arr2[j++];
    }
}

int main() {
    const int arr1[] = {1, 3, 5};
    const int m = sizeof(arr1) / sizeof(arr1[0]);

    const int arr2[] = {2, 5, 6};
    const int n = sizeof(arr2) / sizeof(arr2[0]);

    int result[m + n];

    mergeSortedArrays(arr1, m, arr2, n, result);

    printf("Merged Sorted Array: [");
    for (int i = 0; i < m + n; i++) {
        printf("%d", result[i]);
        if (i < m + n - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    return 0;
}

