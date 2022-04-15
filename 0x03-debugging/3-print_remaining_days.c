#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - takes a date and prints how many days are
 * left in the year, taking leap years into account
 * @month: month in number format
 * @day: day of month
 * @year: year
 * Return: void
 */

void print_remaining_days(int month, int day, int year)
{
	if  (((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) && (month == 1))
	{
		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", 366 - day);
	}
	else if  (((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) && (month == 2))
	{
		printf("Day of the year: %d\n", day + 31);
		printf("Remaining days: %d\n", 366 - (day +31));
	}
	else if (((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) && (month == 3))
	{
	       	printf("Day of the year: %d\n", day + 60);
		printf("Remaining days: %d\n", 366 - (day + 60));
	}
	else if (((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))&& (month == 4))
	{
	       	 printf("Day of the year: %d\n", day + 91);
		 printf("Remaining days: %d\n", 366 - (day + 91));
	}
	else if  (((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) && (month == 5))
	{
		printf("Day of the year: %d\n", day + 121);
		printf("Remaining days: %d\n", 366 - (day + 121));
	}
	else if  (((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) && (month == 6))
	{
		printf("Day of the year: %d\n", day + 152);
		printf("Remaining days: %d\n", 366 - (day + 152));
	}
	else if  (((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) && (month == 7))
	{
		printf("Day of the year: %d\n", day + 182);
		printf("Remaining days: %d\n", 366 - (day + 182));
	}
	else if  (((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) && (month == 8))
	{
		printf("Day of the year: %d\n", day + 213);
		printf("Remaining days: %d\n", 366 - (day + 213));
	}
	else if  (((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) && (month == 9))
	{
		printf("Day of the year: %d\n", day + 244);
		printf("Remaining days: %d\n", 366 - (day + 244));
	}
	else if  (((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) && (month == 10))
	{
		printf("Day of the year: %d\n", day + 274);
		printf("Remaining days: %d\n", 366 - (day + 274));
	}
	else if  (((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) && (month == 11))
	{
		printf("Day of the year: %d\n", day + 305);
		printf("Remaining days: %d\n", 366 - (day + 305));
	}
	else if  (((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) && (month == 12))
	{
		printf("Day of the year: %d\n", day + 335);
		printf("Remaining days: %d\n", 366 - (day + 335));
	}
	else if (!((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) || (month == 1))
	{
		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", 365 - day);
	}
	else if  (!((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) || (month == 2))
	{
		printf("Day of the year: %d\n", day + 31);
		printf("Remaining days: %d\n", 365 - (day + 31));
	}
	else if (!((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) || (month == 3))
	{
	       	printf("Day of the year: %d\n", day + 60);
		printf("Remaining days: %d\n", 365 - (day + 60));
	}
	else if (!((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) || (month == 4))
	{
	       	 printf("Day of the year: %d\n", day + 91);
		 printf("Remaining days: %d\n", 365 - (day + 91));
	}
	else if  (!((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) || (month == 5))
	{
		printf("Day of the year: %d\n", day + 121);
		printf("Remaining days: %d\n", 365 - (day + 121));
	}
	else if  (!((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) || (month == 6))
	{
		printf("Day of the year: %d\n", day + 152);
		printf("Remaining days: %d\n", 365 - (day + 152));
	}
	else if  (!((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) || (month == 7))
	{
		printf("Day of the year: %d\n", day + 182);
		printf("Remaining days: %d\n", 365 - (day + 182));
	}
	else if  (!((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) || (month == 8))
	{
		printf("Day of the year: %d\n", day + 213);
		printf("Remaining days: %d\n", 365 - (day + 213));
	}
	else if  (!((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) || (month == 9))
	{
		printf("Day of the year: %d\n", day + 244);
		printf("Remaining days: %d\n", 365 - (day + 244));
	}
	else if  (!((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) || (month == 10))
	{
		printf("Day of the year: %d\n", day + 274);
		printf("Remaining days: %d\n", 365 - (day + 274));
	}
	else if  (!((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) || (month == 11))
	{
		printf("Day of the year: %d\n", day + 305);
		printf("Remaining days: %d\n", 365 - (day + 305));
	}
	else if  (((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) && (month == 12))
	{
		printf("Day of the year: %d\n", day + 335);
		printf("Remaining days: %d\n", 365 - (day + 335));
	}
	else 
	{
		printf("Invalid input");
	}
}
