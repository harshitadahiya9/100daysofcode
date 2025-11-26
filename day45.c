Q89: 

#include <stdio.h>

int main() {
    char str[100], ch;
    int i, count = 0;

    gets(str);
    scanf("%c", &ch);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch)
            count++;
    }

    printf("%d\n", count);
    return 0;
}
Q90: 

#include <stdio.h>

int main() {
    char str[100];
    int i;
    gets(str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
        else if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
    }

    printf("%s", str);
    return 0;
}
