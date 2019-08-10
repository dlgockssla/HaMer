#include <stdio.h>
#include <string.h>

typedef struct {
	char name[10];
	int year;
	int pay;
}employee;

int main() {
	int i;
	employee em[2] = {{ "Jack", 2014, 4200 },{ "John", 2015, 3300 }};

	for (i = 0; i<2; i++) {
		printf("\n Name : %s", em[i].name );
		printf("\n Year : %d", em[i].year );
		printf("\n Salary : %d \n", em[i].pay );
	}
}