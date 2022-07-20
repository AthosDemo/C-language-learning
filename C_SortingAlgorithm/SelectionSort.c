#include <stdio.h>

void selection_sort( int a[] , int len)
{
    int i,j,temp;

    for ( i = 0; i < len -1 ; i++ )
    {
        int min = i;  //Record the minimum value,the first element is minimum by default
        for ( j = i + 1; j < len ; j++ ) //Access unsorted elements
        {
            if ( a[j] < a[min] ) //Find the current minimum
            {
                min = j ;   //Record minimum
            }
        }
        if( min != i)
        {
            temp = a[min];
            a[min] = a[i];
            a[i] = temp;
        }
    }
}

int main(void)
{
    int arr[] = { 22,34,3,32,8,4,5,7,4,40,91,75};
    int len = (int) sizeof(arr) / sizeof(*arr);
    selection_sort(arr,len);
    int i;
    for ( i = 0 ; i < len ; i++ )
        printf("%d ", arr[i] );
    return 0;
}