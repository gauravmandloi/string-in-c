#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char c;
    char s[8];
    char sen[50];
    
    scanf("%c",&c);
    printf("%c",c);
    printf("\n");

    scanf("%s",&s);
    printf("%s",s);
    printf("\n");
    
    getchar();
    scanf("%[^\n]%*c",&sen);
    printf("%s",sen);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
