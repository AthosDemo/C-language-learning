#include <stdio.h>

int main(void)
{
    FILE *fp =NULL;
    char buff[255];

    fp = fopen("G:/Studying Forever/C language learning/C_FileToReadAndWrite/test.txt","r");
    fscanf(fp,"%s\n",buff);
    printf("1: %s\n",buff);

    fgets(buff,255,(FILE*)fp);
    printf("2: %s\n",buff);

    fgets(buff,255,(FILE*)fp);
    printf("3: %s\n",buff);
    fclose(fp);

    return 0;
}