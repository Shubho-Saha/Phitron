#include<stdio.h>
int main() {
    int n;
    int sum = 0;
    scanf("%d", &n);
    char arr[n];
    scanf("%s", arr);
    for(int i=0; i<n; i++) {
        int val = arr[i] - 48;
        sum = sum + val;
    }
    printf("%d", sum);
    
}