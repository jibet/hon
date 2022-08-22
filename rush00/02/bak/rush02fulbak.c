#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
	write(1,&c,1);
}

void    rush(int x, int y)
{	int counter,loop;
	char toprint1, toprint2;

	if (x <1 || y < 1)
	{
		printf("Invalid input, please enter integer number greater than 0");
	}	
	else
	{
		for (loop=1; loop<=y  ;++loop)
		{
			if (loop == 1)
			{
				toprint1 = 'A';
				toprint2 = 'B';
			}
			else if (loop < y)
			{
				toprint1 = 'B';
				toprint2 = ' ';
			}
			else if (loop == y)
			{
				toprint1 = 'C';
				toprint2 = 'B';
			}


			for (counter=1; counter<=x ;++counter)
			{
				if (counter == x || counter ==1 )
				{
					ft_putchar(toprint1);
					//printf("%c",toprint1);
				}
				else
				{
					ft_putchar(toprint2);
					//printf("%c",toprint2);
				}
			}

			if (loop <=y)  
			{
				ft_putchar('\n');
				//printf("\n");
			}
		}
	}
}   

int main()
{
	rush(100,3);
	return 0;
}
