/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhammiou <hhammiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 11:27:46 by hhammiou          #+#    #+#             */
/*   Updated: 2024/08/04 10:22:43 by hhammiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	len = 0;
	i = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	if (size > 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (len);
}

/*int main(void)
{
    char src[] = "Hello, world!";
    char dest[20];
    unsigned int size;
    unsigned int result;

    size = sizeof(dest);
    result = ft_strlcpy(dest, src, size);
    printf("Source: %s\n", src);
    printf("Destination après copie: %s\n", dest);
    printf("Longueur totale de la source: %u\n", result);
    return 0;
}*/