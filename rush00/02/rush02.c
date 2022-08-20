/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckam-hoo <ckam-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 18:15:18 by ckam-hoo          #+#    #+#             */
/*   Updated: 2022/08/20 18:44:57 by ckam-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char c);

char	toprint1;
char	toprint2;
int		xcounter;
int		ycounter;

void	char_template(int y)
{
	if (ycounter == 1)
	{
		toprint1 = 'A';
		toprint2 = 'B';
	}
	else if (ycounter < y)
	{
		toprint1 = 'B';
		toprint2 = ' ';
	}
	else if (ycounter == y)
	{
		toprint1 = 'C';
		toprint2 = 'B';
	}
}

void	print_content(int x)
{
	if (xcounter == x || xcounter == 1)
	{
		ft_putchar(toprint1);
	}
	else
	{
		ft_putchar(toprint2);
	}
}

void	rush(int x, int y)
{		
	if (x < 1 || y < 1)
	{
		printf("Invalid input, please enter integer number greater than 0");
	}	
	else
	{
		ycounter = 1;
		while (ycounter <= y)
		{
			char_template(y);
			xcounter = 1;
			while (xcounter <= x)
			{
				print_content(x);
				++xcounter;
			}
		ft_putchar('\n');
		++ycounter;
		}
	}
}
