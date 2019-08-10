#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
	char name[10];
	int year;
	int pay;
}employee;


int main() {
	employee em1;
	employee *em2 = &em1;
	strcpy(em2->name, "You"); //em2->name === (*em2).name
	em2->year = 2015;
	em2->pay = 5900;

	printf("\n Name : %s", em2->name);
	printf("\n Year : %d", em2->year);
	printf("\n Salary : %d", em2->pay);

	printf("\n Name : %s", em1.name);
	printf("\n Year : %d", em1.year);
	printf("\n Salary : %d", em1.pay);
}
