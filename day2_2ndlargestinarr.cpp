#include <stdio.h>
#include <limits.h>

int main(){
	int n;
	printf("Enter the size of the array : ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements one by one (press enter)");
	for(int i = 0; i < n; i++){
		scanf("%d",&arr[i]);
	}
	int max_1 = arr[0];
	int max_2 = INT_MIN;
	
	for(int i=0;i < n;i++){
		if(arr[i] > max_1){
			max_2 = max_1;
			max_1 = arr[i];
		}else if(arr[i]>max_2 && arr[i]!=max_1){
			max_2 = arr[i];
		}
	}
	printf("The second largest number in the array is %d",max_2);
	
}
