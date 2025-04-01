#include <stdio.h>
#include <conio.h>

int String_Validation(char str[])
{
    int i = 0;
    while (str[i] == 'a')
    {
        i++;
    }
    if (str[i] == 'b' && str[i + 1] == 'b' && str[i + 2] == '\0')
    {
        return 1;
    }
    else
    {                                   
        return 0;
    }
}
int main()
{
    char str[100];
    printf("Enter your name: ");
    scanf("%s", &str);
    printf("My Sring is %s \n", str);
    int ans = String_Validation(str);
    printf("Ans is  %d", ans);
    return 0;
}