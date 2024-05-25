#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        int arr[3];
        for(int i=0; i<3; i++) {
            scanf("%d", &arr[i]);
        }
        int d1 = arr[2];
        int m1 = arr[0];
        int totalFarmers = m1 + arr[1];
        int d2 = (m1*d1) / totalFarmers;
        int ans = d1 - d2;
        printf("%d\n", ans);
    }
    return 0;
}