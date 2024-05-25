#include<stdio.h>
long long int recursion(int arr[], int n) {
    if (n <= 0) {
        return 0;
    }
    return arr[n-1] + recursion(arr, n-1);

}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    long long int ans = recursion(arr, n);
    printf("%lld", ans);
}