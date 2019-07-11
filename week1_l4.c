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

	float ave=0;
	int sum=0;
	for(int i=0; i<n; i++){
		sum += arr[i];
	}
	ave = (float)sum/n;

	float mid=0;
	if(n % 2 == 1){
		mid = arr[n/2];
	}else{
		mid = (float)(arr[n/2] + arr[n/2 - 1]) / 2;
	}

	int* freq = (int*)malloc(sizeof(int)*n);
	int holder=0;
	int cnt=1;
	int maxFreq=0;
	for(int i=0; i<n-1; i++){
		if(arr[i] == arr[i+1]){
			cnt++;
		}else{
			if(cnt > maxFreq){
				maxFreq = cnt;
				holder = 0;
				freq[holder++] = arr[i];
				cnt = 1;
			}
			else if(cnt == maxFreq){
				freq[holder++] = arr[i];
				cnt = 1;
			}
		}
	}
	if(cnt > maxFreq){
		maxFreq = cnt;
		holder = 0;
		freq[holder++] = arr[n-1];
		cnt = 1;	
	}
	else if(cnt == maxFreq){
		freq[holder++] = arr[n-1];
	}


	printf("ave : %.3f\n", ave);
	printf("mid : %.3f\n", mid);
	printf("freq : ");
	for(int i=0; i<holder; i++){
		printf("%d ", freq[i]);
	}
	printf("\n");

	return 0;
}




















