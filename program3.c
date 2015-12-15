#include <stdio.h>

int main()
{
	
	int days, hours, minutes, seconds;
	
	printf("How many seconds? ");
	scanf("%i",&seconds);

	if (seconds<86400)
		days=0;
	else 
		days=seconds/86400;
		seconds=seconds%86400;

	if (seconds<3600)
		hours=0;
	else
		hours=seconds/3600;
		seconds=seconds%3600;

	if (seconds<60)
		minutes=0;
	else
		minutes=seconds/60;
		seconds=seconds%60;

	printf("\n Days: %i\n Hours: %i\n Minutes: %i\n Seconds: %i\n ", days, hours, minutes, seconds);
}
