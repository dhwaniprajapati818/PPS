#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char filename[100];
    long fileSize;
    char ch;

    // File name input
    printf("Enter filename: ");
    scanf("%s", filename);

    // Open file in read mode
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: Could not open file '%s'\n", filename);
        return 1;
    }

    // Move to end of file to get size
    fseek(fp, 0, SEEK_END);
    fileSize = ftell(fp);

    if (fileSize == 0) {
        printf("File is empty.\n");
        fclose(fp);
        return 0;
    }

    // Read and print characters from end to beginning
    printf("\nFile contents in reverse order:\n");
    printf("--------------------------------\n");

    for (long i = fileSize - 1; i >= 0; i--) {
        fseek(fp, i, SEEK_SET);
        ch = fgetc(fp);
        putchar(ch);
    }

    printf("\n--------------------------------\n");
    fclose(fp);
    return 0;
}