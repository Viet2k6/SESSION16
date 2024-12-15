#include <stdio.h>
void update(int *arr, int n, int index) {
    *(arr + index - 1) = n;  
}
int main() {
    int arr[] = {6, 25, 13, -8, 47, 89, 36, 99};
    int n = sizeof(arr)/sizeof(int);
    printf("Truoc khi update: ");
    for (int i = 0; i < n; i++) {
        printf("\t%d", arr[i]);
    }
    
    update(arr, 55, 2);
    
    printf("\nSau khi update: ");
    for (int i = 0; i < n; i++) {
        printf("\t%d", arr[i]);
    }
    return 0;
}
