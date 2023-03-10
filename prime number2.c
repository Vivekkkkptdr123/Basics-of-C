#include<stdio.h>
int main()
{
    int i,j,n=100,c=1;
    for(i=2 ;i<=n ;i++)
    {
        for(j=2 ;j<=(i/2) ;j++)
        {
            if(i%j==o)
            {
                c=0;
                break;
            }
            else
            {
                c=1;
            }
        }
        if(c==1)
        {
            printf("%d",i);
        }
    }
}