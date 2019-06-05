#include<stdio.h>
int sum(int a,int b);
int sub(int a,int b);
int mul(int a,int b);
int div(int a,int b);
int main()
{
    int a,b,r,c,o;
    printf("CALCULATOR\n");
    printf("\n");
    jump2:
    printf("Enter first number:\n");
    scanf("%d",&a);
    printf("Enter second number:\n");
    scanf("%d",&b);
    jump1:
    printf("Enter the operation: \nEnter 1 for addition \nEnter 2 for subtraction \nEnter 3 forvmultiplication \nEnter 4 for division \n");
    scanf("%d",&o);
    switch(o)
        {
        case 1:
            {
                printf("You have chosen addition of %d and %d\n",a,b);
                r=sum(a,b);
                printf("%d+%d=%d\n",a,b,r);
                break;
            }
        case 2:
            {
                printf("You have chosen subtraction of %d and %d\n",a,b);
                r=sub(a,b);
                printf("|%d-%d|=%d\n",a,b,r);
                break;
            }
        case 3:
            {
                printf("You have chosen multiplication of %d and %d\n",a,b);
                r=mul(a,b);
                printf("%d*%d=%d\n",a,b,r);
                break;
            }
        case 4:
            {
                printf("You have chosen division of %d and %d\n",a,b);
                div(a,b);
                break;
            }
        default:
            {
                printf("Enter a correct input\n");
                goto jump1;
            }
        }
        printf("if you want to continue press 1 else press 2\n");
        scanf("%d",&c);
        if(c==1)
        {
            goto jump2;
        }
        else
        {
            printf("\n");
            printf("\nTHANK YOU FOR USING THE CALCULATOR\n\n");
            return 0;
        }

}
int sum(int a,int b)
{
    int s;
    s=a+b;
    return s;
}
int sub(int a,int b)
{
    int s;
    if(a>b)
    {
        s=a-b;
    }
    else
    {
        s=b-a;
    }
    return s;
}
int mul(int a,int b)
{
    int s;
    s=a*b;
    return s;
}
int div(int a,int b)
{
    int s,r;
    if (b==0)
    {
        printf("\nDivision by zero is not possible so please try again\n");
    }
    else
    {
        s=a/b;
        r=a%b;
        printf("%d/%d gives %d as quotient and %d as remainder\n",a,b,s,r);
        return 0;
    }

}
