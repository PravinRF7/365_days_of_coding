#include <stdio.h>

int main(){
	int n;
	printf("Enter size of the array : ");
	scanf("%d",&n);
	int array[n];
	for(int i;i<n;i++){
		scanf("%d",&array[i]);
	}
	int number_to_check;
	printf("Enter number to check : ");
	scanf("%d",&number_to_check);
	
	int j=0,p=1;
	while(p==1 && j<n){
		if(array[j]==number_to_check){
			printf("Present");
			p=0;
		}else{
			j++;
		}
}
	if(j==n){
		printf("Not Present");
	}
	
	return 0;
}
