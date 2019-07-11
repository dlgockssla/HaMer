#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(){
	int n;
	scanf("%d", &n);

	int* arr = (int*)malloc(sizeof(int)*n);
	for(int i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}

	int result = INT_MIN;
	for(int i=0; i<n; i++){
		if(result < arr[i]){
			result = arr[i];
		}
	}
	printf("%d\n", result);

	free(arr);

	return 0;
}