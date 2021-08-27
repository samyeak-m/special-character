#include <stdio.h>
int main()
{
    char str1;

    printf("Enter first character: ");
    scanf("%c", &str1);

    if((str1 >= 'a' && str1 <= 'z') || (str1 >= 'A' && str1 <= 'Z') || str1 >= '0' && str1 <= '9')
    {
        printf("given character is alphabet.");
    }
    else 
    {
        printf("one of the given character is special character.");
    }

    return 0;
}
