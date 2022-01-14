#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int num1, num2;
    printf("Please Enter 2 Number to Identify Bigger Number : ");
    scanf("%d%d", &num1,&num2);
    if(num1>num2)
    {
        printf("%d is Bigger Number &\n",num1);
        printf("%d is Smaller Number",num2);
    }
    else
    {
        if(num1==num2)
        {
            printf("You've Entered Same Number");
        }
        else
        {
            printf("%d is Bigger Number &\n",num2);
            printf("%d is Smaller Number",num1);
        }
    }
    getch();
    return 0;
}
