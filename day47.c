Q93: 

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int freq[26] = {0};
    gets(str1);
    gets(str2);

    if (strlen(str1) != strlen(str2)) {
        printf("Not anagrams");
        return 0;
    }

    for (int i = 0; str1[i] != '\0'; i++)
        freq[str1[i] - 'a']++;

    for (int i = 0; str2[i] != '\0'; i++)
        freq[str2[i] - 'a']--;

    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            printf("Not anagrams");
            return 0;
        }
    }

    printf("Anagrams");
    return 0;
}
Q94:

#include <stdio.h>
#include <string.h>

int main() {
    char str[200], word[50], longest[50];
    int i = 0, j = 0, maxLen = 0;
    gets(str);

    for (i = 0; ; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            word[j] = '\0';
            if (strlen(word) > maxLen) {
                maxLen = strlen(word);
                strcpy(longest, word);
            }
            j = 0;
            if (str[i] == '\0')
                break;
        } else {
            word[j++] = str[i];
        }
    }

    printf("%s", longest);
    return 0;
}
