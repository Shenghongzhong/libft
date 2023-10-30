/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <szhong@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:14:03 by szhong            #+#    #+#             */
/*   Updated: 2023/10/30 12:06:06 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//#include <stdio.h>
//#include <stdlib.h>
int	ft_atoi(const char *str)
{
	int	num;
	int	num_parity;
	int	parity;

	num = 0;
	parity = 0;
	num_parity = 0;
	while ((*str > 8 && *str < 14) || *str == 32)
		str++;
	while (*str == '-' || *str == '+')
	{
		num_parity++;
		if (*str == '-')
			parity++;
		str++;
	}
	while ((*str > 47 && *str < 58))
	{
		num *= 10;
		num += *str - 48;
		str++;
	}
	if (num_parity > 1)
		return (0);
	else if (parity > 0)
		return (-num);
	return (num);
}
/*
int	ft_atoi(const char *str)
{
	int	num;
	int	parity;

	while (*str == '\0')
		return (0);
	while ((*str > 7 && *str < 14) || *str == 32)
		str++;
	while (*str == '-')
	{
		parity++;
		str++;
	}
	while (*str)
	{
		num *= 10;
		num += num;
		str++;
	}
	return (num);
}*/
//int	main()
//{
//	char str[] = " 123 abc";
//	int	num;
//
//	num = ft_atoi(str);
//	printf("my atoi %d\n", num);
//	num = atoi(str);
//	printf("offical atoi %d\n", num); 
//	return (0);
//}
///*
//int	atoi(const char *nptr)
///
///{
//	int	i;
//
//	if (nptr == (char *)0;)
//		return (0);
//	while (*nptr)
//	{
//		i = 48;
//		if (*nptr == i)
//			i -= 48;
//	}
//}*/