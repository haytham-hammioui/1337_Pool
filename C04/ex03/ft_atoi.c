/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhammiou <hhammiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 12:22:32 by hhammiou          #+#    #+#             */
/*   Updated: 2024/08/09 22:08:47 by hhammiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	i;
	int	s;
	int	p;

	p = 0;
	s = 1;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			s *= -1; 
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		p = p * 10 + str[i] - '0';
		i++;
	}
	return (p * s);
}

/*int main()
{
	const char str[] = " ---+--+1234ab567";
	printf("%d\n", ft_atoi(str));
}*/