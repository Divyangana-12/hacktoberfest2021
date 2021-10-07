#include <stdio.h>
#include <stdlib.h>
int leapYear(int);
int main()
{
    printf("happy new year\n");
     printf("----Lest check this year is leap year or not-------\n");
    int year;
    printf("Enter the year : \n");
    scanf("%d",&year);

    if(leapYear(year))
        printf("%d is a leap year",year);
    else
        printf("%d is not a leap year",year);
        getch();
    return 0;
}
int leapYear(int x)
{
    if((x%400==0)||((x%4==0)&&(x%100!=0)))

       return 1;
    else
        return 0;
}
