#include<stdio.h>
main()
{
    int n,i,c;
    printf("Enter the value of n:-\n");
    scanf("%d",&n);
    for(i=1; i<=10; i++)
    {
        c=i*n;
        printf("2 X %d",i," = ");
        printf("  %d\n",c);   
    }

}