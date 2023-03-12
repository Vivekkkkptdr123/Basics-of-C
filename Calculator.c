//Funtions/procedure/subroutine
#include<stdio.h>
int sub(int a ,int b);
int add(int a,int b);
int mul(int a,int b);
int div(int a,int b);
int main()
{
    int a,b,c;
    char o;
    printf("Enter the operation: ");
    scanf("%c",&o);
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
    
    switch(o)
    {
        case '+':
        printf("%d",add(a,b));
        break;
        case '-':
        printf("%d",sub(a,b));
        break;
        case '*':
        printf("%d",mul(a,b));
        break;
        case '/':
        printf("%d",div(a,b));
        break;
        default:
        printf("Invalid Input");
        break;                
    }
    return 0;

}
int add(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
int mul(int a,int b)
{
    return a*b;
}
int div(int a,int b)
{
    return a/b;
}
