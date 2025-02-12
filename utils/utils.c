/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-kass <rel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 16:08:16 by rel-kass          #+#    #+#             */
/*   Updated: 2025/02/12 22:08:03 by rel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*str;
	int j;
	int i;

	i = 0;
	j = 0;
	if (!s1)
		return (strdup(s2));
	if (!s2)
		return (strdup(s1));
	str = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 2));
	if (!str)
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	str[i++] = ' ';
	while (s2[j])
		str[i++] = s2[j++];
	str[i] = '\0';
	return (str);
}
size_t	ft_strlcpy(char *dst, char *src, size_t dstsize)
{
	size_t	srclen;
	size_t	i;
	int		j;

	srclen = ft_strlen(src);
	i = 0;
	j = 0;
	if (dstsize == 0)
		return (srclen);
	while (src[i] && i < dstsize - 1)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (srclen);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	i = 0;
	while ((s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
void	swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}