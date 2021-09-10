/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-mou <ahel-mou@student-1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 13:21:08 by ahel-mou          #+#    #+#             */
/*   Updated: 2021/09/10 13:44:21 by ahel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int cara)
{
	if ((cara >= 65 && cara <= 90) || (cara >= 97 && cara <= 122))
		return (1);
	else if (cara >= 48 && cara <= 57)
		return (1);
	else
		return (0);
}