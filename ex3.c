#include <stdio.h>

int main(){
	char *ptrArray[2];
	char **ptrptr;

	ptrArray[0] = "Korea";
	ptrArray[1] = "Suwon";
	ptrptr = ptrArray;

	printf("1. %u\n", &ptrArray[0]);
	printf("2. %u\n", &ptrArray[0][0]);
	printf("3. %c\n", ptrArray[0][0]);
	printf("4. %c\n", ptrArray[0][1]);
	printf("5. %s\n", ptrArray[0]);

	printf("6. %u\n", &ptrArray[1]);
	printf("7. %u\n", &ptrArray[1][0]);
	printf("8. %c\n", ptrArray[1][0]);
	printf("9. %c\n", ptrArray[1][1]);
	printf("10. %s\n", ptrArray[1]);

	printf("11. %u\n", &ptrptr);
	printf("12. %u\n", ptrptr);
	printf("13. %u\n", *ptrptr);
	printf("14. %c\n", **ptrptr);
	printf("15. %c\n", *(*ptrptr + 1));
	printf("16. %s\n", *ptrptr);
}

