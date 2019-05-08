#include <stdio.h>

int main()
{
    int i,j,k;
    scanf("%d\n",&i);
    for(j =1;j<=i;j++)
    {
        scanf("%d",&k);
        if(k%2==0)
        printf("even\n");
        else printf("odd\n");
    }
    return 0;
}
