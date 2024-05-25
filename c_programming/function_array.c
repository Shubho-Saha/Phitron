#include<stdio.h>

void func(int arr[]) {
    // printf("%d\n", arr[3]);
    int s = sizeof(arr);
    printf("size inside func: %d", s);
}

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    // printf("%d\n", arr[2]);
    int sz = sizeof(arr);
    printf("size: %d\n", sz);
    func(arr);
}