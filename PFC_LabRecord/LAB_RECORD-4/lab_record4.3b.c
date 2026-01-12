#include <stdio.h>

int factorial(int n) {
    int f = 1;
    for(int i = 1; i <= n; i++)
        f *= i;
    return f;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", factorial(n));

    printf("NAME:-Anshuman pal, ERP_ID: RU-25-10247 \n");
    return 0;
}