#include <stdio.h>

int main() {
    char filename[100];
    int lineCount = 0;

    printf("Enter the filename: ");
    scanf("%s", filename);

    FILE *file = fopen(filename, "r");

    if (!file) {
        printf("Unable to open the file.\n");
        return 1;
    }

    while (fgetc(file) != EOF) {
        if (fgetc(file) == '\n') {
            lineCount++;
        }
    }

    fclose(file);

    printf("Number of lines in the file: %d\n", lineCount + 1);

    return 0;
}
