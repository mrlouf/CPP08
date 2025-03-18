/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <nponchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 17:37:50 by nponchon          #+#    #+#             */
/*   Updated: 2025/03/18 12:34:35 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iterator>
#include <algorithm>
#include "easyfind.hpp"

template <typename T>
typename T::iterator easyfind(T &v, const int i)
{
	typename T::iterator it = v.begin();
	typename T::iterator end = v.end();
	for (; it != end; it++) {
		if (*it == i)
			return it;
	}
	throw std::runtime_error("Element not found");
}
