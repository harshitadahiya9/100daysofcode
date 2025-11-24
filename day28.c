Q55: 

#include <stdio.h>

int main() {
    int n, i, j, flag;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Prime numbers from 1 to %d are:\n", n);

    for(i = 2; i <= n; i++) {
        flag = 0; 

        for(j = 2; j <= i / 2; j++) {
            if(i % j == 0) {
                flag = 1; 
                break;
            }
        }

        if(flag == 0) {
            printf("%d ", i);
        }
    }

    return 0;
}
Q56: 

#include <stdio.h>

int main() {
    int n, i;
    int a[100];  

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Array elements are:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
