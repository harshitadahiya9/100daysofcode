Q49: 

#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 5; i++) {            
        for (j = 6 - i; j <= 5; j++) {     
            printf("%d", j);
        }
        printf("\n");                     
    }

    return 0;
}
Q50: 

#include <stdio.h>

int main() {
    int i, j, space;

    for (i = 1; i <= 5; i++) {        
        for (space = 1; space < i; space++) {
            printf(" ");
        }
        for (j = i; j <= 5; j++) {     
            printf("*");
        }
        printf("\n");                
    }

    return 0;
}
