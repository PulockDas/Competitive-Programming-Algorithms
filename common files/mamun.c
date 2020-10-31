#include <stdio.h>

int main ()
{
    char ch;
    printf("Enter a character to check :\n");
    scanf("%c",&ch);
    if(ch>47 && ch<58)
        printf("It's a digit.");
    else if(ch>64 && ch<123)
        printf("It's an alphabet.");
    else
        printf("It's a special character.");
    return 0;
}
