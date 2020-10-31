#include <stdio.h>

int main ()
{
    int i,j,k;
    for(i=1;i<6;i++){
        k=i+5;
        for(j=i;j<k;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
