#include<stdio.h>

void func(int *p) {
    printf("x from func: %d\n", *p);
    printf("x er address from func: %p\n", p);
    *p = 500;
}

int main() {
    int x = 10;
    printf("main x: %d\n", x);
    printf("x er address: %p\n", &x);
    func(&x);
    printf("x er value from main: %d\n", x);
}