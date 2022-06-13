#include <stdio.h>
int main()
{
    FILE * fout = fopen("file.txt", "w+");

    printf("Hello Word\n");
    fprintf(fout, "Hello Word\n");

    fclose(fout);
}
