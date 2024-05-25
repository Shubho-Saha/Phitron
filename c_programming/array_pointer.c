#include<stdio.h>
int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    printf("arr[0] er address: %p\n", &arr[0]);
    printf("arr er address: %p\n", arr);
    printf("arr -> %p\n", &arr);
    printf("%d\n", arr[1]);
    printf("%d\n", 1[arr]);
    printf("%d\n", *(arr + 1));
    printf("%d\n", *(arr));
}