/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhammiou <hhammiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 10:29:45 by hhammiou          #+#    #+#             */
/*   Updated: 2024/08/12 13:42:50 by hhammiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (nb > 1)
	{
		i *= nb;
		--nb;
	}
	return (i);
}

/*int main()
{
	int nb = 1;
	printf("%d\n", ft_iterative_factorial(nb));
}*/