#include <stdio.h>

int main ()
{
    int n,i,sm,k,t;
    printf("Enter how much number in your list :\n");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n-1;i++)
    {
        sm=arr[i];
        k=i;
        for(int j=i;j<n-1;j++)
        {
            if(sm>arr[j+1])
            {
                sm=arr[j+1];
                k=j+1;
            }
        }
        t=arr[k];
        arr[k]=arr[i];
        arr[i]=t;
    }

    printf("Sorted list is :\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("Median is :\n");
    if(n%2!=0)
        printf("%d",arr[n/2]);
    else{
        double m=(arr[n/2]*1.0+arr[n/2-1]*1.0)/2;
        printf("%lf",m);
    }
    return 0;
}
