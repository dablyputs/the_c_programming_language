#include <stdio.h>

int main(void)
{
	int c;
	while (1)
	{
		(c = (getchar() != EOF));
		if (c == 1)
		{
			printf("c is equal to %d\n", 1);
		}
		else if (c == 0)
		{
			printf("c is equal to %d\n", 0);
		}
		return(0);
	}
}
