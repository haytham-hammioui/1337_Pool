/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhammiou <hhammiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 11:24:29 by hhammiou          #+#    #+#             */
/*   Updated: 2024/08/03 16:01:03 by hhammiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*int main() {
    char src[] = "Hello, World!";
    char dest[50];

    ft_strncpy(dest, src, 5);
    dest[5] = '\0';
    printf("test 1: %s\n", dest);

    ft_strncpy(dest, src, 20);
    dest[20] = '\0';
    printf("test 2: %s\n", dest);

    ft_strncpy(dest, src, 0);
    dest[0] = '\0';
    printf("test 3: %s\n", dest);
    return 0;
}*/