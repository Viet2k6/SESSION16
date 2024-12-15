#include <stdio.h>
int sum(int *a, int *b) {
    return (*a) + (*b); 
}
int main() {
    int x = 2, y = 5, s;
    s = sum(&x, &y);  
    printf("Tong: %d\n", s); 
    return 0;
}
