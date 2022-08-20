/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yraji <yraji@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2122/18/21 19:14:35 by yraji             #+#    #+#             */
/*   Updated: 2022/08/20 21:42:43 by yraji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_error_msg(void)
{
	ft_putchar('E');
	ft_putchar('R');
	ft_putchar('R');
	ft_putchar('O');
	ft_putchar('R');
	ft_putchar('!');
	ft_putchar(' ');
	ft_putchar('G');
	ft_putchar('T');
	ft_putchar('F');
	ft_putchar('O');
	ft_putchar('!');
	ft_putchar('\n');
}

void	print_top_and_bottom(int x, int y, int n_rows, int n_cols)
{
	if ((n_rows == y && n_cols == x) || (n_rows == y && n_cols == 1))
	{
		ft_putchar('A');
	}
	else if ((n_rows == 1 && n_cols == 1) || (n_rows == 1 && n_cols == x))
	{
		ft_putchar('C');
	}
	else
	{
		ft_putchar('B');
	}
}

void	print_middle(int x, int y, int n_rows, int n_cols)
{
	if (!(n_rows == y || n_rows == 1))
	{
		if ((n_cols == x) || (n_cols == 1))
		{
			ft_putchar('B');
		}
		else
		{
			ft_putchar(' ');
		}
	}
}

void	rush(int x, int y)
{
	int	n_rows;
	int	n_cols;

	if ((x < 1) || (y < 1))
		print_error_msg();
	else
	{
		n_rows = y;
		while (n_rows >= 1)
		{
			n_cols = x;
			while (n_cols >= 1)
			{
				if ((n_rows == y) || (n_rows == 1))
				{
					print_top_and_bottom(x, y, n_rows, n_cols);
				}
				print_middle(x, y, n_rows, n_cols);
				n_cols--;
			}
			ft_putchar('\n');
			n_rows--;
		}
	}
}
