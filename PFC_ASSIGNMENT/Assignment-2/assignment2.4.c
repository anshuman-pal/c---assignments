#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    // One four-leaf clover + (N-1) three-leaf clovers
    int total = 4 + (N - 1) * 3;

    printf("%d", total);

    printf("NAME:-Anshuman pal, ERP_ID: RU-25-10247 \n");
    return 0;
}