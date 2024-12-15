#include <stdio.h>
void show( int *arr , int n){
	for( int i = 0; i < n ; i++){
		printf("\t%d", *(arr + i));
	}
}
int main( ){
	int arr[] = {6, 25, 13, -8, 47, 89, 36, 99};
	int n = sizeof(arr)/sizeof(int);
	show(arr, n);

	return 0;
}
