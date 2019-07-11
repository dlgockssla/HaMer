#include <stdio.h>
#define max(a, b) a>b?a:b

int main(){
	int a,b,c;
	int result=0;
	scanf("%d %d %d", &a, &b, &c);

	result = max(a, b);
	result = max(result, c);

	printf("%d\n", result);

	return 0;
}