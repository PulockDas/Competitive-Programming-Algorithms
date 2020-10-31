#include <stdio.h>
#include <string.h>

void search(char *txt, char *pat)
{
    int m=strlen(txt);
    int n=strlen(pat);
    int i,j;
    for(i=0;i<m-n;i++)
    {
        for(j=0;j<n;j++)
            if(pat[j]!=txt[i+j])
                break;
        if(j==n)
            printf("Pattern found at index %d\n",i+1);
    }
}

int main ()
{
    char txt[]="AABAACAADAABAAABAA";
    char pat[]="AABA";
    search(txt,pat);
    return 0;
}
