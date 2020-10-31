#include <stdio.h>

void print(int a, int b){
    for(;a<b-1;a++){
        printf("%d\t",a+1);
    }
}

int main ()
{
    int n,m;
    printf("Enter your interval by two integers :\n");
    scanf("%d %d", &n, &m);
    print(n,m);
    return 0;
}
