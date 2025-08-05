#include<stdio.h>



int main()
{   
    int arr[10] = {5,7,4,2,3,4,5,6,1,9};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("%d", size);
    

    return 0;
}