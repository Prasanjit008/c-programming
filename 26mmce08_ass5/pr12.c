#include <stdio.h>
int i,j,val;
void main() {
    for ( i = 0; i < 5; i++) {
        
        for (j = 0; j < i; j++) {
            printf("  ");
        }
        
        
        val = (i % 2 == 0) ? 1 : 0;
        for (j = 0; j < 5 - i; j++) {
            printf("%d ", val);
        }
        printf("\n");
    }
   
}
