/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhammiou <hhammiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 14:27:06 by hhammiou          #+#    #+#             */
/*   Updated: 2024/08/15 17:56:41 by hhammiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		src_len;
	char	*ptr;
	int		i;

	src_len = ft_strlen(src);
	ptr = malloc(src_len + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	i = 0; 
	while (i < src_len)
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

t_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*stocks;
	int			i;

	stocks = malloc(sizeof (t_stock_str) * (ac + 1));
	if (stocks == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		stocks[i].size = ft_strlen(av[i]);
		stocks[i].str = av[i];
		stocks[i].copy = ft_strdup(av[i]);
		i++;
	}
	stocks[i].size = 0;
	stocks[i].str = 0;
	stocks[i].copy = 0;
	return (stocks);
}
//int main(void)
//{
//    char *av[] = {"Hello", "World", "42", "Piscine"};
//    int ac = 4;
//    t_stock_str *array = ft_strs_to_tab(ac, av);
//    if (!array)
//    {
//        printf("Memory allocation failed\n");
//        return 1;
//    }
//    for (int i = 0; i < ac; i++)
//    {
//        printf("String: %s\n", array[i].str);
//        printf("Copy: %s\n", array[i].copy);
//        printf("Size: %d\n\n", array[i].size);
//    }
//    for (int i = 0; i < ac; i++)
//    {
//        free(array[i].copy);
//    }
//    free(array);
//    return 0;
//}