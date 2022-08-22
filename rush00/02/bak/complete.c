#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
	write(1,&c,1);
}
void    rush(int x, int y)
{
	//int counter=1,loop =1 ;
	char toprint1, toprint2;

	if (x <1 || y < 1)
	{
		printf("Invalid input, please enter integer number greater than 0");
	}	
	else
	{
	    int loop = 1;
	    while (loop <= y)
		//for (loop=1; loop<=y  ;++loop)
		{
		    //to determine the which template of char to print in current horizontal line. 
		    //3 templates: top horizontal line / lowest horizontal line /anything between top and bottom
			if (loop == 1) // top line template
			{
				toprint1 = 'A';
				toprint2 = 'B';
			}
			else if (loop < y)//anything in between
			{
				toprint1 = 'B';
				toprint2 = ' ';
			}
			else if (loop == y) //bottom
			{
				toprint1 = 'C';
				toprint2 = 'B';
			}
			
            //to print the char depends on horizontal line template
            int counter = 1; 
			while (counter <= x)
			//for (counter=1; counter<=x ;++counter)
			{
				if (counter == x || counter ==1 ) // first and last char
				{
					ft_putchar(toprint1);
				}
				else //anything in between first and last char
				{
					ft_putchar(toprint2);
				}
				++counter;
			}

			if (loop <=y) //go to next line 
			{
				ft_putchar('\n');
			}
		    ++loop;

		}
	}
}   

int main()
{
	rush(5,3);
	return 0;
}

