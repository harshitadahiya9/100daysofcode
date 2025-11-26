Q69: 

#include <stdio.h>

int main() {
    int n, i;
    int a[100];
    int max1, max2;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }


    max1 = max2 = a[0];

    
    for(i = 1; i < n; i++) {
        if(a[i] > max1) {
            max2 = max1;
            max1 = a[i];
        }
        else if(a[i] > max2 && a[i] < max1) {
            max2 = a[i];
        }
    }

    printf("Second largest element = %d\n", max2);

    return 0;
}
Q70: 

#include <stdio.h>

int main() {
    int n, k, i;
    int a[100], temp[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter number of positions to rotate: ");
    scanf("%d", &k);

    
    k = k % n;

    
    for(i = 0; i < k; i++) {
        temp[i] = a[n - k + i];
    }

    
    for(i = n - 1; i >= k; i--) {
        a[i] = a[i - k];
    }

    
    for(i = 0; i < k; i++) {
        a[i] = temp[i];
    }

    printf("Array after rotation:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
