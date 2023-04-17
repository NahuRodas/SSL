#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE *output;

    printf("Hello World");

    output = fopen("output.txt", "w");
    fprintf(output, "Hello World");
    fclose(output);
    return 0;
}
