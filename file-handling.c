#include <stdio.h>

int main() {

    FILE *file = fopen("data.txt", "w");

    if (file != NULL) {
        fprintf(file, "This is a file handling example.\n");
        fclose(file);
        printf("File written successfully.\n");
    } else {
        printf("Error opening file.\n");
    }

    return 0;
}
