/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhammiou <hhammiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 11:27:25 by hhammiou          #+#    #+#             */
/*   Updated: 2024/08/03 22:47:37 by hhammiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	newword;
	int	i;

	newword = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') 
			|| (str[i] >= 'A' && str[i] <= 'Z') 
			|| (str[i] >= '0' && str[i] <= '9' ))
		{
			if (str[i] >= 'a' && str[i] <= 'z' && newword == 0)
				str[i] -= 32;
			else if (str[i] >= 'A' && str[i] <= 'Z' && newword == 1)
				str[i] += 32;
			newword = 1;
		}
		else
			newword = 0;
		i++;
	}
	return (str);
}
/*int main()
{
	char str[100] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	ft_strcapitalize(str);
	printf("%s\n",str);
}*/