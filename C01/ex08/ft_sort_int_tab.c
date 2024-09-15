/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhammiou <hhammiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 15:29:52 by hhammiou          #+#    #+#             */
/*   Updated: 2024/07/31 17:36:53 by hhammiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	swp;

	i = 0;
	swp = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (tab[i] <= tab[j])
			{
				swp = tab[i];
				tab[i] = tab[j];
				tab[j] = swp;
			}
			j++;
		}
		i++;
	}
}

/*int main()
{
    int tab[] = {5, 3, 8, 1};
    int size = 4;

    printf("original: ");
    for (int i = 0; i < size;)
    {
        printf("%d ", tab[i]);
		i++;
    }
    printf("\n");

    ft_sort_int_tab(tab, size);

    printf("change: ");
    for (int i = 0; i < size;)
    {
        printf("%d ", tab[i]);
		i++;
    }
    printf("\n");

    return 0;
}*/