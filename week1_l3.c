#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	scanf("%d", &n);

	int* arr = (int*)malloc(sizeof(int)*n);
	for(int i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}

	int tmp;
	for(int i=0; i<n-1; i++){
		for(int j=0; j<n-i-1; j++){
			if(arr[j] > arr[j+1]){
				tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
		}
	}

	for(int i=0; i<n; i++){
		printf("%d ", arr[i]);
	}

	return 0;
}