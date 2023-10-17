
#include <stdio.h>

int main() {
    char sourceFilename[100];
    char destinationFilename[100];
    char buffer[1024];
    size_t bytesRead;

    printf("Enter the source filename: ");
    scanf("%s", sourceFilename);

    printf("Enter the destination filename: ");
    scanf("%s", destinationFilename);

    FILE *sourceFile = fopen(sourceFilename, "rb");
    FILE *destinationFile = fopen(destinationFilename, "wb");

    if (!sourceFile || !destinationFile) {
        printf("Unable to open the files.\n");
        return 1;
    }

    while ((bytesRead = fread(buffer, 1, sizeof(buffer), sourceFile)) > 0) {
        fwrite(buffer, 1, bytesRead, destinationFile);
    }

    fclose(sourceFile);
    fclose(destinationFile);

    printf("File copied.\n");

    return 0;
}
