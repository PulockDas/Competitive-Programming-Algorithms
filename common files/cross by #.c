#include <stdio.h>
#include <conio.h>
main ()
{
    while(1)
    {
    int n,i,j;
    printf("Enter your cherised size (odd number) :\n");
    scanf("%d",&n);
    if(n%2!=0)
    {
    for(i=0;i<n/2;i++)
    {
        for(j=0;j<i;j++)
        {
            printf(" ");
        }
        printf("#");
        for(j=n-2*(i+1);j>0;j--)
        {
            printf(" ");
        }
        printf("#");
        printf("\n");
    }
    for(i=0;i<(n/2);i++)
    {
        printf(" ");
    }
    printf("#");
    printf("\n");
    for(i=0;i<n/2;i++)
    {
        for(j=(n/2)-1-i;j>0;j--)
        {
            printf(" ");
        }
        printf("#");
        for(j=2*i+1;j>0;j--)
        {
            printf(" ");
        }
        printf("#");
        printf("\n");
    }
    }
    else
        printf("It's not possible.");
    }
    getch ();
}
