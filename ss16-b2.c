#include <stdio.h>
void swap( int *a, int *b ){
	int temp = *a ;
	*a = *b ;
	*b = temp ;
}
int main( ){
	int x = 3 , y = 7;
	printf("Truoc khi doi: x = %d, y = %d\n", x, y);
	swap(&x, &y);
	printf("Sau khi doi: x = %d, y = %d\n", x, y);
	return 0;
}
