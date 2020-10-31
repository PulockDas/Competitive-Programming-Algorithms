#include <stdio.h>
#include <stdlib.h>

main ()

{
    int n;
    scanf("%d",&n);
    char li[100000];
    char *p,*e;
    long input;
    int count;

    for(int i=0;i<n;i++)
    {
        scanf(" %[^\n]",li);
        count=0;
        for(p=li; ;p=e)
        {
            input=strtol(p,&e,10);
            if(p==e)
                break;
            count++;
        }
        printf("%d\n",count);
    }
}
