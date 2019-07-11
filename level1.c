#include <stdio.h>

int main(){
	int a, b, c;
	int result = 0;
	scanf("%d %d %d", &a, &b, &c);

	if(a > b){
		result = a;
	}
	else{
		result = b;
	}

	if(result < c){
		result = c;
	}

	printf("%d\n", result);

	return 0;
}