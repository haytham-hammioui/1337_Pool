/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhammiou <hhammiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 12:05:11 by hhammiou          #+#    #+#             */
/*   Updated: 2024/08/14 22:42:43 by hhammiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	size;
	int	*p;

	if (min >= max)
	{
		return (NULL);
	}
	i = 0;
	size = max - min;
	p = malloc(4 * size);
	if (!p)
	{
		return (NULL);
	}
	while (i < size)
	{
		p[i] = min;
		i++;
		min++;
	}
	return (p);
}

/*int main()
{
    int min = 3;
    int max = 8;
    int *range;
    int size;
	int i;

    range = ft_range(min, max);

    if (range == NULL)
    {
        printf("Error: Invalid range\n");
        return 1;
    }
    size = max - min;
	i = 0;
    while(i < size)
    {
        printf("%d ", range[i]);
		i++;
    }
    printf("\n");
    free(range);
    return 0;
}*/