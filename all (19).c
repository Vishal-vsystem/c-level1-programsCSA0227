#include <stdio.h>
#include <string.h>

int main() {
    int i = 0;
    char s[50], a[50];

    printf("Enter the first string: ");
    fgets(s, 50, stdin);
    printf("Enter the second string: ");
    fgets(a, 50, stdin);

    // Remove the newline character if it exists
    s[strcspn(s, "\n")] ='\0';
    s[strcspn(a, "\n")]= '\0';

    // Now simply compare until they differ or reach the end
    while (s[i] != '\0' && a[i] != '\0' && s[i] == a[i]) {
        i++;
    }

    if (s[i] == a[i]) {
        printf("Both strings are equal\n");
    } else if (s[i] > a[i]) {
        printf("String 's' is greater\n");
    } else {
        printf("String 'a' is greater\n");
    }

    return 0;
}