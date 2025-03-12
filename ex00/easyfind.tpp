/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <nponchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 17:37:50 by nponchon          #+#    #+#             */
/*   Updated: 2025/03/12 19:14:11 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <vector>
#include <algorithm>
#include "easyfind.hpp"

template <typename T>
T easyfind(std::vector<T> &v, const int i)
{
	for (size_t j = 0; j < v.size(); ++j) {
		if (v[j] == i)
			return v[j];
	}
	throw ElementNotFoundException();
	return 0;
}

const char* ElementNotFoundException::what() const throw() {
	return "element not found in container";
}
