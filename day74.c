//Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

/*
Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt

*/
#include <stdio.h>

int main() {
    char sourceFilename[100], destFilename[100];
    printf("Enter the source filename: ");
    scanf("%s", sourceFilename);
    printf("Enter the destination filename: "); 
    scanf("%s", destFilename);  
    FILE *sourceFile = fopen(sourceFilename, "r");
    if (sourceFile == NULL) {
        printf("Could not open source file %s\n", sourceFilename);
        return 1;
    }
    FILE *destFile = fopen(destFilename, "w");
    if (destFile == NULL) {
        printf("Could not open destination file %s\n", destFilename);
        fclose(sourceFile);
        return 1;
    }
    char ch;
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
    }
    fclose(sourceFile);
    fclose(destFile);
    printf("File copied successfully to %s\n", destFilename);
                           
    return 0;
}