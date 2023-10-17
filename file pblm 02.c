
#include <stdio.h>

int main() {
    char filename[100];
    char buffer[1000];

    printf("Enter the filename to read: ");
    scanf("%s", filename);

    FILE *file = fopen(filename, "r");

    if (!file) {
        printf("Unable to open the file.\n");
        return 1;
    }

    printf("Contents of the file:\n");

    for (char c; (c = fgetc(file)) != EOF; putchar(c));

    fclose(file);

    return 0;
}
