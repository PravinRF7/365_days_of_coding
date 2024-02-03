#include <stdio.h>

void find_factors(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Factors of %d: ", arr[i]);

        for (int j = 1; j <= arr[i]; j++) {
            if (arr[i] % j == 0) {
                printf("%d ", j);
            }
        }

        printf("\n");
    }
}

int main() {
    int n;
	printf("Enter the size of the array : ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements one by one (press enter)");
	for(int i = 0; i < n; i++){
		scanf("%d",&arr[i]);
	}
    int size = sizeof(arr) / sizeof(arr[0]);

    find_factors(arr, size);

    return 0;
}

