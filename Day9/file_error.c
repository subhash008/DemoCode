#include <stdio.h>
#include <string.h>
#include <errno.h>

int main() {

FILE *fp = fopen("lldata.txt", "r"); // Try opening a file forreading

if (fp == NULL) {

    perror("fopen failed: "); // Print error message with perror

    printf("Error details: %s\n", strerror(errno)); // Printdetailed error using strerror

    printf("Erro no : %d\n\n",errno);

    return 1;
}

int num;
scanf("%d",&num);

int data = fgetc(fp); // Read a character
if (ferror(fp)) {
    perror("fgetc failed");
    fclose(fp);
    return 1;
}
// Rest of your code to read from the file
fclose(fp); // Close the file
return 0;
}
