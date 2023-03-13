#include <stdio.h>
int main()
{
    int i, j,a[10][10],b[10][10],c[10][10];
    printf("Enter matA ele:\n");
    for (i=0; i<2; i++)
    {
        for (j=0; j<2; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter matB ele:\n");
    for (i=0; i<2; i++)
    {
        for (j=0; j<2; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("The add of 2 X 2 mat is:\n");
    for (i=0; i<2; i++)
    {
        for (j=0; j<2; j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}
