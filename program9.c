#include <stdio.h>

int main()
{
    printf("VISHNU BAJPAI \n SECTION B\n");
    int days, years, weeks;
printf("Enter the number of days:");
scanf("%d",&days);
    years = days/365;
    weeks = (days % 365)/7; 
    days = days - ((years*365) + (weeks*7)); 
    printf(" %dYears\n", years);
    printf(" %dWeeks\n", weeks);
    printf(" %dDays\n", days);

    return 0;
}