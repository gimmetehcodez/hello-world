#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    if (argc != 2) {
        fprintf(stderr, "Usage: hello-world <FILENAME>\n");
        return -1;
    }
    
    strtok(argv[1], ".");
    const char *extension = strtok(NULL, "");
    
    if (strcmp(extension, "hw")) {
        fprintf(stderr, "Error: Unrecognized file extension %s\n", extension);
        return -1;
    }
    
    FILE *input = fopen(argv[1], "r");
    
    if (!input) {
        fprintf(stderr, "Error: Couldn't open file %s\n", argv[1]);
        return -1;
    }
    
    if (getchar(input) != EOF) {
        fprintf(stderr, "Error: File %s not empty!\n", argv[1]);
        return -1;
    }
    
    printf("Hello, World!");
    return 0;
}
