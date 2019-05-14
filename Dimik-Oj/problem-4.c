#include<stdio.h>

int main()
{
    int i,j,k,n;
    scanf("%d\n",&i);
    for(j=1;j<=i;j++)
    {
        scanf("%d",&k);
        printf("Case %d:",j);
        for(n=1;n<=k;n++)
        {
            if(k%n==0)
            printf(" %d",n);
        }printf("\n");
    }return 0;
}
