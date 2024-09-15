/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhammiou <hhammiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 12:05:28 by hhammiou          #+#    #+#             */
/*   Updated: 2024/08/15 00:10:15 by hhammiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;
	int	*p;

	i = 0;
	size = max - min;
	if (min >= max)
	{
		*range = (NULL);
		return (0);
	}
	p = malloc(4 * size);
	if (!p)
	{
		*range = (NULL);
		return (-1);
	}
	while (i < size)
	{
		p[i++] = min++;
	}
	*range = p;
	return (i);
}

/*int main()
{
    int *range;
    int min = 8;
    int max = 3;
    int size;

    size = ft_ultimate_range(&range, min, max);
    if (size == -1)
    {
        printf("Memory allocation failed\n");
        return 1;
    }
    else if (size == 0)
    {
        printf("Invalid range\n");
        return 1;
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d ", range[i]);
    }
    printf("\n");
    free(range);
    return 0;
}*/