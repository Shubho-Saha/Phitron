#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int count_before_one(int arr[], int n) {
    int count = 0;
    for(int i=0; i<n; i++) {
        if (arr[i] != 1) {
            count++;
        } else {
            break;
        }
    }

    return count;
}

int main() {
    int x;
    scanf("%d", &x);
    int arr[x];
    for(int i=0; i<x; i++) {
        scanf("%d", &arr[i]);
    }

    int ans = count_before_one(arr, x);
    printf("%d", ans);

}