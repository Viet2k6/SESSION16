#include <stdio.h>
int search(int *arr, int n, int num) {
    for (int i = 0; i < n; i++) {
        if (*(arr + i) == num) {
            return i + 1;  
        }
    }
    return -1; 
}
int main() {
    int arr[] = {6, 25, 13, -8, 47, 89, 36, 99};
    int n = sizeof(arr) / sizeof(int);
    
    int i = search(arr, n, 47);
    
    if (i != -1) {
        printf("Vi tri cua phan tu can tim: %d", i);
    } else {
        printf("Phan tu khong ton tai trong mang.");
    }
    return 0;
}
