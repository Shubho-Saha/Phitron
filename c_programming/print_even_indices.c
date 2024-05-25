#include<stdio.h>
void recursion(int a[], int n) {
    if (n < 0) return;
    if (n % 2 == 0) {
        printf("%d ", a[n]);
    }
    recursion(a, n-1);
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    recursion(arr, n-1);
}