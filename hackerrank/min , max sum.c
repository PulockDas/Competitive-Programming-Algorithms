#include <stdio.h>
main ()
{
    long long arr[5];
    int i,j,t;
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<4;i++)
    {
        for(j=i;j<4;j++)
        {
            if(arr[j]>arr[j+1])
            {
                arr[j]=t;
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }

        }
    }
}
