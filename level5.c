#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	scanf("%d", &n);

	int* arr = (int*)malloc(sizeof(int)*n);
	for(int i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}

	int tmp = 0;
	for(int i=0; i<n-1; i++){
		for(int j=0; j<n-1-i; j++){
			if(arr[j] > arr[j+1]){
				tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
		}
	}

	int* arr2 = (int*)malloc(sizeof(int)*n);
	int holder=0;
	for(int i=0; i<n-1; i++){
		if(arr[i] != arr[i+1]){
			arr2[holder++] = arr[i];
		}
	}
	arr2[holder++] = arr[n-1];

	for(int i=0; i<holder; i++){
		printf("%d ", arr2[i]);
	}
	printf("\n");

	return 0;
}









