#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter first value:\n");
    scanf("%d",&a);
    printf("Enter second value:\n");
    scanf("%d",&b);
    printf("Enter third value:\n");
    scanf("%d",&c);
    if (a<b)
    {
        if (a<c)
        {
            printf("%d is smallest value",a);
        }
        else
        {
            printf("%d is smallest value",c);
        }    
    }
    else
    {
        if (b<c)
        {
            printf("%d is smallest value",b);
        }
        else
        {
             printf("%d is smallest value",c);
        }
        
    }

    return 0;
}
