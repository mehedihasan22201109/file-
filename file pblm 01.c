#include <stdio.h>

int main() {
    FILE *file;
    char filename[100];

    printf("Enter the filename to create: ");
    scanf("%s", filename);

    file = fopen(filename, "w");

    if (file == NULL) {
        printf("Unable to open the file.\n");
        return 1;
    }

    printf("Enter the text to store in the file (Ctrl+D to end input):\n");
    char buffer[1000];
    while (fgets(buffer, sizeof(buffer), stdin) != NULL) {
        fprintf(file, "%s", buffer);
    }

    fclose(file);
    printf("File \"%s\" created and information stored.\n");

    return 0;
}

