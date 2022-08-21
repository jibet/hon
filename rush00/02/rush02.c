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

char	start_end_char;
char	mid_char;
int		xcounter;
int		ycounter;

void	char_template(int y)
{
	if (ycounter == 1)
	{
		start_end_char = 'A';
		mid_char = 'B';
	}
	else if (ycounter < y)
	{
		start_end_char = 'B';
		mid_char = ' ';
	}
	else if (ycounter == y)
	{
		start_end_char = 'C';
		mid_char = 'B';
	}
}

void	print_content(int x)
{
	if (xcounter == x || xcounter == 1)
	{
		ft_putchar(start_end_char);
	}
	else
	{
		ft_putchar(mid_char);
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
