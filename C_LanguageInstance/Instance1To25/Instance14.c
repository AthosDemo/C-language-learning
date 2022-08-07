//The odd/even number in the range of the cycle interval

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int begin_num,end_num;
    int *even_arr,*odd_arr;
    int i ,j;
    int even_num =0,odd_num = 0;
    int range_num;
    printf("Please enter the range:");
    scanf("%d %d",&begin_num,&end_num);
    
    range_num = end_num - begin_num + 1;
    even_arr =(int*)calloc( range_num,sizeof(int));
    odd_arr = (int*)calloc( range_num,sizeof(int));
   
    for ( begin_num ; begin_num < end_num + 1 ; begin_num++)
    {
        if(begin_num % 2 == 0)
        {
            even_arr[even_num] = begin_num;
            even_num++;
        }   
        else
        {
            *(odd_arr+odd_num) = begin_num;
            odd_num++;
        }
            
    }
    printf("Even:\n");
    for (i = 0 ; i < even_num; i++)
    {
        printf("%d ",*(even_arr + i));
    }
    printf("\nOdd:\n");
    for( j = 0 ; j < odd_num; j++)
    {
        printf("%d ",*(odd_arr + j));
    }
    free(even_arr);
    free(odd_arr);
    return 0;
   
}