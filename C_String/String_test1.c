#include <stdio.h>
#include <string.h>

int main()
{
    char str1[14] = "runoob";
    char str2[14] = "google";
    char str3[14];
    int len;

    //Copy str1 to str3
    strcpy(str3,str1);
    printf("strcpy( str3,str1 ): %s\n",str3);

    //Connect str1 and str2
    strcat( str1,str2);
    printf("strcat( str1,str2 ): %s\n",str1);

    //After connecting the total length of str1
    len = strlen(str1);
    printf("strlen(str1): %d\n",len);

    return 0;
}