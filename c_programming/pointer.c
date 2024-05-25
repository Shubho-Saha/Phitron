#include<stdio.h>
int main() {
    int x = 10;
    printf("x er value: %d\n", x);
    printf("x er address: %p\n", &x);

    int *ptr = &x;
    printf("ptr er value: %p\n", ptr);
    printf("ptr er address: %p\n", &ptr);

    printf("x er value from ptr -> %d\n", *ptr);

    *ptr = 100;
    printf("x er value from x: %d\n", x);
    printf("x er value from ptr: %d\n", *ptr);


}