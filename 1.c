#include <stdio.h>
int main()
{
    system("color 00b4");
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}