/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhammiou <hhammiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 10:38:32 by hhammiou          #+#    #+#             */
/*   Updated: 2024/07/30 14:12:23 by hhammiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

/*int	main(void)
{
	int a = 145;
	int b = 10;
	int	*div = &a;
	int	*mod = &b;
	
	ft_div_mod(a, b, div, mod);

	printf("divise: %d\n", *div);
	printf("reste: %d\n", *mod);
}*/