Q95: 

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], temp[200];
    gets(str1);
    gets(str2);

    if (strlen(str1) != strlen(str2)) {
        printf("Not rotation");
        return 0;
    }

    strcpy(temp, str1);
    strcat(temp, str1);

    if (strstr(temp, str2) != NULL)
        printf("Rotation");
    else
        printf("Not rotation");

    return 0;
}
Q96:

#include <stdio.h>
#include <string.h>

void reverse(char *start, char *end) {
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str[200];
    gets(str);

    char *word_start = str;
    char *ptr = str;

    while (*ptr) {
        if (*ptr == ' ') {
            reverse(word_start, ptr - 1);
            word_start = ptr + 1;
        }
        ptr++;
    }
    reverse(word_start, ptr - 1); 

    printf("%s", str);
    return 0;
}
