#include <stdio.h>

typedef struct _Range
{
    int start, end;
} Range;
Range new_Range(int s,int e)
{
    Range r;
    r.start = s;
    r.end = e;
    return r;
}
void swap( int *x , int *y)
{
    int t = *x;
    *x = *y;
    *y = t;
}
void quick_sort(int arr[], const int len)
{
    if ( len <= 0)
        return;  //Avoid Segment Fault if len is negative
    //r[] simulates the list,p is quantity,r[p++]is push,r[--p]is pop and gets elements
    Range r[len]; 
    int p = 0;
    r[p++] = new_Range(0,len -1 );
    while (p)
    {
        Range range = r[--p];
        if (range.start >= range.end)
            continue;
        int mid = arr[(range.start + range.end) / 2 ];
        int left = range.start, right =range.end;
        do
        {
            while (arr[left] < mid) ++left; //Check whether the left side of the reference point meets the requirements
            while( arr[right] > mid) --right; //Check whether the right side of the reference point meets the requirements

            if (left <= right)
            {
                swap(&arr[left],&arr[right]);
                left++;right--;
            }
        } while (left <= right );
        
        if( range.start < right) r[p++] = new_Range(range.start,right);
        if( range.end > left ) r[p++] = new_Range(left, range.end);
    }
}

int main(void)
{
    int arr[] = { 22,34,3,32,8,5,7,4,40,91,75};
    int len = (int) sizeof(arr) / sizeof(*arr);
    quick_sort(arr,len);
    int i;
    for ( i = 0 ; i < len ; i++ )
        printf("%d ", arr[i] );
    return 0;
}
