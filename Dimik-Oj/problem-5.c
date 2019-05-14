#include<stdio.h>

int main()
{
    int i,j,k,l,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&k);
        for(j=1;j<=k;j++)
        {
            for(l=1;l<=k;l++)
            printf("*");
            printf("\n");
        }
            if(i<n)
            printf("\n");
        }
    return 0;
}
