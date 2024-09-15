/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhammiou <hhammiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 12:05:42 by hhammiou          #+#    #+#             */
/*   Updated: 2024/08/15 02:14:12 by hhammiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	dest_len;
	int	i;

	dest_len = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[dest_len] = src[i];
		dest_len++;
		i++;
	}
	dest[dest_len] = '\0';
	return (dest);
}

void	ft_cat(char *result, int size, char **strs, char *sep)
{
	int	j;

	j = 0;
	while (j < size)
	{
		ft_strcat(result, strs[j]);
		if (j < size - 1)
		{
			ft_strcat(result, sep);
		}
		j++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		total_length;
	int		i;

	if (size == 0)
	{
		result = malloc(1);
		if (result)
		{
			result[0] = '\0';
		}
		return (result);
	}
	total_length = 0;
	i = 0;
	while (i < size)
	{
		total_length += ft_strlen(strs[i++]);
	}
	total_length += (size - 1) * ft_strlen(sep);
	result = malloc(total_length + 1);
	if (!result)
	{
		return (NULL);
	}
	result[0] = '\0';
	ft_cat(result, size, strs, sep);
	return (result);
}

/*int	main(void)
{
	char	*strs[] = {"Hello", "world", "this", "is", "C"};
	char	*sep = " ";
	char	*result;

	result = ft_strjoin(5, strs, sep);
	if (result == NULL)
	{
		printf("Error allocating memory\n");
		return (1);
	}

	printf("Result: %s\n", result);
	free(result);
	return (0);
}*/