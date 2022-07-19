#include <stdio.h>
#include <errno.h>
#include <string.h>

extern int errno;

int main(void)
{
    FILE *pf;
    int errnum;
    pf = fopen("unexist.txt","rb");
    if(pf == NULL)
    {
        errnum = errno;
        fprintf(stderr,"Wrong number: %d\n",errno);
        perror("Output errors through perror");
        fprintf(stderr,"File opening error: %s\n",strerror( errnum));
    }
    else
    {
        fclose (pf);
    }
    return 0;
}