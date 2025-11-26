Q99:

#include <stdio.h>
#include <string.h>

int main() {
    char date[20];
    int d, m, y;
    char *months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                      "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

    gets(date);
    sscanf(date, "%d/%d/%d", &d, &m, &y);

    printf("%02d-%s-%d", d, months[m - 1], y);
    return 0;
}
Q100

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    gets(str);
    int n = strlen(str);

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            for (int k = i; k <= j; k++)
                printf("%c", str[k]);
            if (i != n - 1 || j != n - 1)
                printf(",");
        }
    }

    return 0;
}
