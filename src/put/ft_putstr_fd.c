/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabisco <vabisco@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:45:59 by vabisco           #+#    #+#             */
/*   Updated: 2025/10/14 15:45:59 by vabisco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

ssize_t	ft_putstr_fd(char *s, int fd)
{
	ssize_t	total;
	ssize_t	ret;

	if (!s || fd < 0)
		return (-1);
	total = 0;
	while (*s)
	{
		ret = ft_putchar_fd(*s, fd);
		if (ret == -1)
			return (-1);
		total += ret;
		s++;
	}
	return (total);
}
