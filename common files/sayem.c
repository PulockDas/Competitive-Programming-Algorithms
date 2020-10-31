#include <stdio.h>

int main ()
{
    int n,m;
    printf("Enter your interval by two integers :\n");
    scanf("%d %d", &n, &m);
    for(;n<m-1;n++){
        printf("%d\t",n+1);
    }
    return 0;
}
