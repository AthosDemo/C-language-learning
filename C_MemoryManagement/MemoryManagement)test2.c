#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char name[100];
    char *description;

    strcpy(name,"Zara Ali");

    //Dynamically allocated memory    
    description = ( char *)malloc( 30 * sizeof(char));
    if( description == NULL)
    {
        fprintf(stderr, "Error - unable to allocate required memory\n");
    }
    else
    {
        strcpy( description, "Zara ali a DPS student.");
    }

    //Suppose you want to store larger description information
    description = ( char *)realloc( description, 100 * sizeof(char) );
    if( description == NULL)
    {
        fprintf( stderr, "Error - unable to allocate required memory\n");
    }
    else
    {
        strcat( description, "She is in class 10th");
    }

    printf("Name = %s\n",name);
    printf("Description: %s\n", description);

    //Use the free() function to free memory
    free(description);
}