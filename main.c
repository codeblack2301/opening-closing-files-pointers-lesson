#include <stdio.h>

int main()
{
    // read a file

    FILE *ptr = fopen("main.txt", "r");

    if (ptr == 0)
    {
        printf("error");
        return 1;
    }

    char buffer[1024] = {0};

    while (fgets(buffer, sizeof(buffer), ptr))
    {
        printf("%s", buffer);
    }
    fclose(ptr);

    // write the file

    FILE *pfile = fopen("arquivo.txt", "w");

    char text2[] = "rafael";
    if (pfile == 0)
    {
        printf("error message");
        return 1;
    }

    fprintf(pfile, "%s", text2);

    fclose(pfile);

    return 0;
}