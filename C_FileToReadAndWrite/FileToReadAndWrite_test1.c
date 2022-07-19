#include <stdio.h>

int main(void)
{
    FILE *fp = NULL;

    fp = fopen("G:/Studying Forever/C language learning/C_FileToReadAndWrite/test.txt","w+");
    fprintf(fp,"This is testing for fprintf...\n");
    fputs("This is testing for fputs---\n",fp);
    fclose(fp);
}