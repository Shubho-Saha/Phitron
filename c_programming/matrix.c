#include<stdio.h>
#include<stdlib.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n][n];

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    int priSum = 0, secSum = 0;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if (i == j) {
                priSum += arr[i][j];
            }

            if (i + j == n-1) {
                secSum += arr[i][j];
            }
        }
    }
    int ans = abs(priSum - secSum);
    printf("%d", ans);

}