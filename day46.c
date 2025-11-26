Q91: 

#include <stdio.h>

int main() {
    char str[100], result[100];
    int i, j = 0;
    gets(str);

    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch!='a' && ch!='e' && ch!='i' && ch!='o' && ch!='u' &&
            ch!='A' && ch!='E' && ch!='I' && ch!='O' && ch!='U')
            result[j++] = ch;
    }
    result[j] = '\0';

    printf("%s", result);
    return 0;
}
Q92: 

#include <stdio.h>

int main() {
    char str[100];
    int freq[26] = {0};
    gets(str);

    for (int i = 0; str[i] != '\0'; i++) {
        int index = str[i] - 'a';
        freq[index]++;
        if (freq[index] == 2) {
            printf("%c", str[i]);
            return 0;
        }
    }
    return 0;
}
