Q120: 

#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (i == 0 || str[i - 1] == ' ')
            str[i] = toupper(str[i]);
        else
            str[i] = tolower(str[i]);
    }

    printf("%s", str);
    return 0;
}
