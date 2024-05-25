#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d", &n);
    int line = ceil((n+10)*1.0/2);
    int space = line - 1, star = 1;

    for(int i=0; i<line; i++) {
        for(int j=0; j<space; j++) {
            printf(" ");
        }
        for(int j=0; j<star; j++) {
            printf("*");
        }
        star += 2;
        space--;
        printf("\n");
    }
    for(int i=1; i<=5; i++) {
        printf("     ");
        for(int j=0; j<n; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
