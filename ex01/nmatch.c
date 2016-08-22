/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nmatch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkunduru <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/21 20:22:53 by hkunduru          #+#    #+#             */
/*   Updated: 2016/08/21 20:42:14 by hkunduru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	nmatch(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s2 == '*')
	{
		if (*s1 == '\0')
			return (nmatch(s1, s2 + 1));
		else
			return (nmatch(s1, s2 + 1) + nmatch(s1 + 1, s2));
	}
	if (*s1 == '\0' || *s2 == '\0' || *s1 != *s2)
		return (0);
	else
		return (nmatch(s1 + 1, s2 + 1));
}
