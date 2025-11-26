Q83: 

#include <stdio.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0;
    int i;

    printf("Enter a string: ");
    gets(str);  

    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            
        
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
                vowels++;
            else
                consonants++;
        }
    }

    printf("Vowels=%d, Consonants=%d\n", vowels, consonants);

    return 0;
}
Q84: 

#include <stdio.h>

int main() {
    char str[100];
    int i;

    gets(str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }

    printf("%s\n", str);
    return 0;
}
