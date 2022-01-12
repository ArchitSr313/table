#include <stdio.h>

int main()
{
    int a,i;
    printf("enter a number you want to print table for\n");
    scanf("%d", &a);
    printf("the table of %d is\n", a);
    for ( i = 0; i <= 10; i++)
    {
        printf("%d*%d=%d\n", a,i,a*i);
    }
    
    return 0;
}
