Q81: 

#include <stdio.h>

int main() {
    char str[100];
    int count = 0;

    printf("Enter a string: ");
    gets(str);  

    
    for(int i = 0; str[i] != '\0'; i++) {
        count++;
    }

    printf("%d\n", count);

    return 0;
}
Q82: 

#include <stdio.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    gets(str);  

    
    for (int i = 0; str[i] != '\0'; i++) {
        printf("%c\n", str[i]);
    }

    return 0;
}
