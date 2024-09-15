/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhammiou <hhammiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 12:04:53 by hhammiou          #+#    #+#             */
/*   Updated: 2024/08/14 17:13:30 by hhammiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*p;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	p = malloc (sizeof(char) * i + 1);
	if (!p)
	{
		return (NULL);
	}
	i = 0;
	while (src[i] != '\0')
	{
		p[i] = src[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

/*int main()
{
	printf("%s\n", ft_strdup("haytham wahkamj  bMMMMMa0 lak9*"));
}*/