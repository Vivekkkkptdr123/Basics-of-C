#include<stdio.h>
int main()
{
    int n,a=0,b=1,next,temp;
    printf("Enter The value of n:\n");
    scanf("%d",&n);
    printf("%d\n%d\n",a,b);
    for (int i = 1; i <= n; i++)
    {
        next=a+b;
        printf("%d\n",next);
        temp=b;
        a=temp;
        b=next;
    }
    return 0;
}
