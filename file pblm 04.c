
#include <stdio.h>

int main() {
    char filename[100];
    int charCount = 0;
    char c;

    printf("Enter the filename: ");
    scanf("%s", filename);

    FILE *file = fopen(filename, "r");

    if (!file) {
        printf("Unable to open the file.\n");
        return 1;
    }

    while ((c = fgetc(file)) != EOF) {
        charCount++;
    }

    fclose(file);

    printf("Number of characters in the file: %d\n", charCount);

    return 0;
}
