/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <szhong@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:46:22 by szhong            #+#    #+#             */
/*   Updated: 2023/09/13 16:06:41 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	char	i;

	i = 'a';
	while (i <= 'z')
	{
		if (c == i)
			c -= 32;
		i++;
	}
	return (c);
}