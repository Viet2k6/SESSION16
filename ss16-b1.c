#include <stdio.h>
int main( ){
	int x = 8;
	int *xPtr = &x;
	
	printf("In dia chi: \n");
	printf("Cach 1: %d\n", &x);
	printf("Cach 2: %d\n", xPtr);
	
	printf("In gia tri: \n");
	printf("Cach 1: %d\n", x);
	printf("Cach 2: %d\n", *xPtr);
	return 0;
}
