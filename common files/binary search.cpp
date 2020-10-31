#include <stdio.h>
main ()
{
    int ara[]={1,4,6,8,9,11,14,15,20,25,33,83,87,97,99,100};
    int l_in=0;
    int hi_in=15;
    int mid_in;
    int num=97;
    while(l_in<=hi_in)
    {
        mid_in=(l_in+hi_in)/2;
        if(num==ara[mid_in])
            break;
        else if(num<ara[mid_in])
            hi_in=mid_in-1;
        else
            l_in=mid_in+1;
    }
    if(l_in>hi_in)
        printf("%d is not in the array\n",num);
    else
        printf("%d is found in the array. It is the %d th element of the array.\n",ara[mid_in],mid_in);
}
