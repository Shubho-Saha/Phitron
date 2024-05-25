#include<stdio.h>
int main() {
    int test;
    scanf("%d", &test);

    for(int i=0; i<test; i++) {
        int n;
    scanf("%d", &n);
    char str[n];
    scanf("%s", str);

    int pathan = 0, tiger = 0;
    for(int i=0; i<n; i++) {
        if(str[i] == 'T') {
            tiger++;
        }
        if (str[i] == 'P') {
            pathan++;
        }
    }
    
    if(pathan > tiger) {
        printf("Pathaan\n");
    } else if(tiger > pathan) {
        printf("Tiger\n");
    } else {
        printf("Draw\n");
    }
    }
}