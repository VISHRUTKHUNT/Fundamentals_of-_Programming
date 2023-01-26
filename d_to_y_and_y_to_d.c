#include<stdio.h>

main()
{
    int number_of_days, years, number_of_years;
    float days;

    printf("Enter number of days: ");
    scanf("%d", &number_of_days);
    years = number_of_days / 365.25;
    printf("Years = %d", years);
        
	printf("\nEnter number of years: ");
    scanf("%d", &number_of_years);
	days = years*365.25;
    printf("\nDays = %.2f", days);

   
}
