/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkostyla <wkostyla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 14:08:17 by wkostyla          #+#    #+#             */
/*   Updated: 2024/12/03 16:13:39 by wkostyla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	return ((c >= '0' && c <= '9') || (c >= 97 && c <= 122) || (c >= 65
			&& c <= 90));
}

/*int main()
{
	if (ft_isalnum('.'))
	{
		printf("is alnum ");
	}
	else{
		printf("is not alnum");
	}
}*/