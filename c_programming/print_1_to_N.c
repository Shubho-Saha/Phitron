#include<stdio.h>
void recursion(int n) {
    if (n == 0) return;
    if (n == 1) {
        printf("%d", n);
    } else {
        printf("%d ", n);
    }
    
    recursion(n-1);
}

int main() {
    int n;
    scanf("%d", &n);
    recursion(n);
}