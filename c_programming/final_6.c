#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int test; 
    scanf("%d", &test);
    for(int i=0; i<test; i++) {

    int n;
    scanf("%d", &n);
    int a[n], b[n], c[n];

    //taking array input - a
    for(int i=0; i<n; i++) {
        scanf("%d", &a[i]);
    } 

    // Copying a into b
    for(int i=0; i<n; i++) {
        b[i] = a[i];
    } 

    printf("B array before sorting");
    for(int i=0; i<n; i++) {
        printf("%d ", b[i]);
    }
    printf("\n");

    // sorting b
    for(int i=0; i<n-1; i++) {
        for(int j=i+1; j<n; j++) {
            if (b[i] > b[j]) {
                int temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }

    for(int i=0; i<n; i++) {
        printf("%d ", b[i]);
    }

    // for(int i=0; i<n; i++) {
    //     c[i] = abs(a[i] - b[i]);
    // }

    // for(int i=0; i<n; i++) {
    //     printf("%d ", c[i]);
    // }
    // printf("\n");
    }


    return 0;
}
