#include<stdio.h>
#include<stdlib.h>

void DisNum(int n)
{
    if(n>0)
    {
        printf("%d\n",n);
        DisNum(n-1);
    }
}

int main()
{
    int p=5;

    DisNum(p);
    return 0;
}
