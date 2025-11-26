Q125: 
#include <stdio.h>

int main() {
    FILE *file;
    char filename[50];
    char text[200];

    printf("Enter filename: ");
    scanf("%s", filename);
    getchar(); 

    file = fopen(filename, "a");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);

    fputs(text, file);
    fclose(file);

    printf("File updated successfully with appended text.\n");

    return 0;
}
