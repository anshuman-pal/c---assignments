#include <stdio.h>
int main(){
    
    int n;
    scanf("%d", &n);
    
    int count = 0;
    
    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            count++;
        }
    }
    
    printf("Total Divisor = %d\n", count);

    printf("NAME:-Anshuman pal, ERP_ID: RU-25-10247 \n");
    
    return 0;
}