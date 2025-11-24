Q63

#include <stdio.h>

int main() {
    int n1, n2, i, j;
    int a[100], b[100], c[200];

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    printf("Enter %d elements for first array:\n", n1);
    for(i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    printf("Enter %d elements for second array:\n", n2);
    for(i = 0; i < n2; i++) {
        scanf("%d", &b[i]);
    }

    
    for(i = 0; i < n1; i++) {
        c[i] = a[i];
    }
  Q64: 

#include <stdio.h>

int main() {
    long num;
    int count[10] = {0}; 
    int digit, maxCount = 0, maxDigit = 0;

    printf("Enter a number: ");
    scanf("%ld", &num);

    
    while(num > 0) {
        digit = num % 10;     
        count[digit]++;      
        num = num / 10;      
    }

    
    for(int i = 0; i < 10; i++) {
        if(count[i] > maxCount) {
            maxCount = count[i];
            maxDigit = i;
        }
    }

    printf("%d\n", maxDigit);

    return 0;
}

    
    for(j = 0; j < n2; j++) {
        c[i] = b[j];
        i++;
    }

    printf("Merged array:\n");
    for(i = 0; i < n1 + n2; i++) {
        printf("%d ", c[i]);
    }

    return 0;
}
