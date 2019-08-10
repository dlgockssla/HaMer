#include <stdio.h>

int main(){
	int i;
	char string1[20] = "Dreams come true!", string2[20], *ptr1, *ptr2;
	ptr1 = string1;

	printf("1. %u\n", string1);
	printf("2. %u\n", ptr1);
	printf("3. %s\n", string1);
	printf("4. %s\n", ptr1);
	printf("5. %s\n", ptr1+7);

	ptr2 = &string1[7];

	printf("6. ");
	for (i = 16; i>=0; i--) {
		putchar(string1[i]);
	}
	printf("\n");

	for (i = 0; i<20; i++) {
		string2[i] = *(ptr1 + i);
	}

	printf("7. ");
	for (i = 0; i<17; i++) {
		putchar(string2[i]);
	}
	printf("\n");

	*ptr1 = 'P';
	printf("8. %s\n", ptr1);

	*(ptr1 + 1) = 'e';
	printf("9. %s\n", ptr1);

}