#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char name[100];
    char *description;

    strcpy(name,"Zara Ali");

    //Dynamically allocated memory
    description = ( char *)malloc( 200 * sizeof(char) );
    if( description == NULL )
    {
        fprintf(stderr,"Error - unable to allocate required memory\n");
    }
    else
    {
        strcpy( description, "Zara ali aDPS student in class 10th");
    }
    printf("Nmae =%s\n",name);
    printf("Description: %s\n",description);
}