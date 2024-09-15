/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmansour <wmansour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 11:58:28 by wmansour          #+#    #+#             */
/*   Updated: 2024/07/27 12:44:22 by wmansour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_line(char ci, char cm, char cf, int x)
{
	int	i;

	ft_putchar(ci);
	i = 0;
	while (i < x - 2)
	{
		ft_putchar(cm);
		i += 1;
	}
	if (x > 1)
	{
		ft_putchar(cf);
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	if (x <= 0 || y <= 0)
	{
		return ;
	}
	ft_print_line('/', '*', '\\', x);
	i = 0;
	while (i < y - 2)
	{
		ft_print_line('*', ' ', '*', x);
		i += 1;
	}
	if (y > 1)
	{
		ft_print_line('\\', '*', '/', x);
	}
}
