/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhammiou <hhammiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 13:44:30 by hhammiou          #+#    #+#             */
/*   Updated: 2024/07/30 14:12:07 by hhammiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

/*int	main(void)
{
	int n1  = 7;
	int n2  = 3;
	int *a = &n1;
	int *b = &n2;

	ft_swap(a, b);
	printf("ljawb 1: %u\n", *a);
	printf("ljawb 2: %u\n", *b);
}*/