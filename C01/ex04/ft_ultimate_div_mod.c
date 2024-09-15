/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhammiou <hhammiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 12:16:02 by hhammiou          #+#    #+#             */
/*   Updated: 2024/07/30 14:12:32 by hhammiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	if (b != 0)
	{
		div = *a / *b;
		mod = *a % *b;
		*a = div;
		*b = mod;
	}
}

/*int	main(void)
{
	int	vlr1 = 150;
	int	vlr2 = 2;
	int	*a = &vlr1;
	int	*b = &vlr2;
	
	ft_ultimate_div_mod(a, b);

	printf("divise: %d\n", *a);
	printf("Reste: %d\n", *b);
}*/