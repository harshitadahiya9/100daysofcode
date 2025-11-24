Q61: 

#include <stdio.h>

int main() {
    int n, i, key;
    int a[100];
    int found = 0;  

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++) {
        if(a[i] == key) {
            printf("Found at index %d\n", i);
            found = 1;
            break;   
        }
    }

    if(found == 0)
        printf("-1\n");  

    return 0;
}
Q62: 

#include <stdio.h>

int main() {
    int n, i;
    int a[100], temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int start = 0, end = n - 1;

    
    while(start < end) {
        temp = a[start];
        a[start] = a[end];
        a[end] = temp;

        start++;
        end--;
    }

    printf("Reversed array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
