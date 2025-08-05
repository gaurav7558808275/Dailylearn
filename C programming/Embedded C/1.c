#include<stdio.h>

/* implementing XOR from data 0-n*/

int PrintXor(int n)
{
    int res = 0;
    for(int i = 0 ; i < n ; i++)
    {
        res = res ^ i;
    }
    return res;
}

int main()
{
    int val;
    printf("Enter the value of n : ");
    scanf("%d", &val);
    printf("XOR value is %d", PrintXor(val));


    return 0;
}