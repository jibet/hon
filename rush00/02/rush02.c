/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckam-hoo <ckam-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 18:15:18 by ckam-hoo          #+#    #+#             */
/*   Updated: 2022/08/21 16:44:43 by ckam-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char c);

char	g_start_end_char;
char	g_mid_char;
int		g_xcounter;
int		g_ycounter;

void	char_template(int y)
{
	if (g_ycounter == 1)
	{
		g_start_end_char = 'A';
		g_mid_char = 'B';
	}
	else if (g_ycounter < y)
	{
		g_start_end_char = 'B';
		g_mid_char = ' ';
	}
	else if (g_ycounter == y)
	{
		g_start_end_char = 'C';
		g_mid_char = 'B';
	}
}

void	print_content(int x)
{
	if (g_xcounter == x || g_xcounter == 1)
	{
		ft_putchar(g_start_end_char);
	}
	else
	{
		ft_putchar(g_mid_char);
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
		g_ycounter = 1;
		while (g_ycounter <= y)
		{
			char_template(y);
			g_xcounter = 1;
			while (g_xcounter <= x)
			{
				print_content(x);
				++g_xcounter;
			}
			ft_putchar('\n');
			++g_ycounter;
		}
	}
}
