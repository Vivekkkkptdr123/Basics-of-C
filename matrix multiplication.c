#include <stdio.h>
int main()
{
    int i, j,d=0,a[10][10],b[10][10],c[10][10],k;
    printf("Enter matA ele:\n");
    for (i=0; i<2; i++)
    {
        for (j=0; j<3; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter matB ele:\n");
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("The multiplication of A and B matrices is:\n");
    for (i=0; i<2; i++)
    {
        for (j=0; j<3; j++)
        {
            for( k= 0; k<3 ; k++)
            {
                d=d+a[i][k]*b[k][j];
                c[i][j]=d;
            }        
        }
        printf("\n");
    }
    for (i=0; i<2; i++)
    {
        for (j=0; j<3; j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
