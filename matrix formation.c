#include<stdio.h>
int main()
{
    int i,j,rows,col,a[100][100];
    scanf("%d%d",&rows,&col);
    for (i = 1; i <= rows; i++)
    {
        for ( j = 1; j <=col; j++)
        {
            scanf("%d",a[i][j]);
        }
    }
    for (i = 1; i <= rows; i++)
    {
        for ( j = 1; j <=col; j++)
        {
            printf("%d",a[i][j]);
        }
    }
    
    return 0;
}
