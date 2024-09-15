/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhammiou <hhammiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 13:18:32 by hhammiou          #+#    #+#             */
/*   Updated: 2024/08/05 18:49:57 by hhammiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	char	*p;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			p = &str[i];
			while (str[i + j] == to_find[j])
			{
				if (to_find[j + 1] == '\0')
				{
					return (p);
				}
				j++;
			}
		}
		i++;
	}
	return (0);
}

/*int main(void) 
{
    char str1[] = "Hello, world! haytham";
    char to_find1[] = "world";
	
    char *result1 = ft_strstr(str1, to_find1);
    printf("%s\n", result1);
}*/