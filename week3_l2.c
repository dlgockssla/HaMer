#include <stdio.h>

void swap(int* a, int* b){
	int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
    return;
}

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	printf("before : %d %d\n", a, b);
	swap(&a, &b);
	printf("after : %d %d\n", a, b);
}